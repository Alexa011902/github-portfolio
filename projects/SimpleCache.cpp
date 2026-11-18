#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

struct CacheBlock {
    int address = -1;
    bool valid = false;
    int lastUsed = 0;
};

class SimpleCache {
private:
    int numBlocks;
    int ways;
    int numSets;
    int hits = 0;
    int misses = 0;
    int clock = 0;
    std::vector<std::vector<CacheBlock>> sets;

public:
    SimpleCache(int blocks, int associativity) {
        if (blocks <= 0) {
            throw std::invalid_argument("The number of blocks must be positive.");
        }

        if (associativity <= 0) {
            throw std::invalid_argument("Associativity must be positive.");
        }

        if (blocks % associativity != 0) {
            throw std::invalid_argument(
                "The number of blocks must be divisible by the number of ways.");
        }

        numBlocks = blocks;
        ways = associativity;
        numSets = numBlocks / ways;
        sets.resize(numSets, std::vector<CacheBlock>(ways));
    }

    void access(int address) {
        if (address < 0) {
            throw std::invalid_argument("Block addresses must be nonnegative.");
        }

        if (numSets <= 0) {
            throw std::logic_error("Cache has no valid sets.");
        }

        clock++;
        int setIndex = address % numSets;

        // Check whether the address is already in the cache.
        for (int i = 0; i < ways; i++) {
            if (sets[setIndex][i].valid &&
                sets[setIndex][i].address == address) {
                hits++;
                sets[setIndex][i].lastUsed = clock;
                std::cout << "Address " << address << " -> HIT" << std::endl;
                return;
            }
        }

        // The address was not found.
        misses++;
        std::cout << "Address " << address << " -> MISS" << std::endl;

        int replaceIndex = -1;

        // Use an empty block if one is available.
        for (int i = 0; i < ways; i++) {
            if (!sets[setIndex][i].valid) {
                replaceIndex = i;
                break;
            }
        }

        // Otherwise, replace the least recently used block.
        if (replaceIndex == -1) {
            replaceIndex = 0;

            for (int i = 1; i < ways; i++) {
                if (sets[setIndex][i].lastUsed <
                    sets[setIndex][replaceIndex].lastUsed) {
                    replaceIndex = i;
                }
            }
        }

        sets[setIndex][replaceIndex].address = address;
        sets[setIndex][replaceIndex].valid = true;
        sets[setIndex][replaceIndex].lastUsed = clock;
    }

    void printContents() {
        std::cout << "Cache contents:" << std::endl;

        for (int s = 0; s < numSets; s++) {
            std::cout << "Set " << s << ": ";

            for (int w = 0; w < ways; w++) {
                if (sets[s][w].valid) {
                    std::cout << sets[s][w].address << " ";
                } else {
                    std::cout << "Empty ";
                }
            }

            std::cout << std::endl;
        }
    }

    void printStats() {
        int total = hits + misses;

        std::cout << "\nTotal hits: " << hits << std::endl;
        std::cout << "Total misses: " << misses << std::endl;
        std::cout << "Miss rate: "
                  << (total == 0 ? 0.0 : static_cast<double>(misses) / total * 100)
                  << "%" << std::endl;
    }
};

int main() {
    int numBlocks;
    int cacheChoice;
    int policyChoice;
    int numReferences;

    std::cout << "Enter the number of cache blocks: ";
    std::cin >> numBlocks;

    if (numBlocks <= 0) {
        std::cout << "The number of blocks must be positive." << std::endl;
        return 1;
    }

    std::cout << "\nChoose cache type:" << std::endl;
    std::cout << "1. Direct-mapped" << std::endl;
    std::cout << "2. 2-way set-associative" << std::endl;
    std::cout << "3. 4-way set-associative" << std::endl;
    std::cout << "4. Fully associative" << std::endl;
    std::cout << "Enter choice (1-4): ";
    std::cin >> cacheChoice;

    int ways;

    if (cacheChoice == 1) {
        ways = 1;
    } else if (cacheChoice == 2) {
        ways = 2;
    } else if (cacheChoice == 3) {
        ways = 4;
    } else if (cacheChoice == 4) {
        ways = numBlocks;
    } else {
        std::cout << "Invalid cache choice." << std::endl;
        return 1;
    }

    if (numBlocks % ways != 0) {
        std::cout << "The number of cache blocks must be divisible "
                  << "by the selected number of ways." << std::endl;
        return 1;
    }

    std::cout << "\nChoose replacement policy:" << std::endl;
    std::cout << "1. LRU (Least Recently Used)" << std::endl;
    std::cout << "Enter choice (1): ";
    std::cin >> policyChoice;

    if (policyChoice != 1) {
        std::cout << "Only LRU is implemented for this project." << std::endl;
        return 1;
    }

    std::cout << "\nHow many block addresses will you enter? ";
    std::cin >> numReferences;

    if (numReferences <= 0) {
        std::cout << "Enter at least one address." << std::endl;
        return 1;
    }

    std::vector<int> addresses(numReferences);

    std::cout << "Enter the block addresses, one at a time:" << std::endl;

    for (int i = 0; i < numReferences; i++) {
        std::cin >> addresses[i];

        if (addresses[i] < 0) {
            std::cout << "Block addresses must be nonnegative." << std::endl;
            return 1;
        }
    }

    std::string cacheName;

    if (cacheChoice == 1) {
        cacheName = "Direct-Mapped Cache";
    } else if (cacheChoice == 2) {
        cacheName = "2-Way Set-Associative Cache";
    } else if (cacheChoice == 3) {
        cacheName = "4-Way Set-Associative Cache";
    } else {
        cacheName = "Fully Associative Cache";
    }

    std::cout << "\n==============================" << std::endl;
    std::cout << cacheName << std::endl;
    std::cout << "==============================" << std::endl;

    try {
        SimpleCache cache(numBlocks, ways);

        for (int address : addresses) {
            cache.access(address);
            cache.printContents();
            std::cout << std::endl;
        }

        cache.printStats();
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
        return 1;
    }

    return 0;
}