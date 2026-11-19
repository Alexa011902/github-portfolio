# Simple Cache Simulator — Project Documentation

## 1. Project Overview

Simple Cache Simulator is a C++ program that simulates how different cache organizations respond to a sequence of memory block references. It reports whether each reference is a cache hit or miss, displays cache contents after each reference, and calculates the final miss rate.

## 2. Project Purpose

The project provides a way to compare several cache organizations using the same sequence of block addresses. By running the program with different cache types, a user can observe how the selected organization affects the number of hits, misses, and the miss rate.

## 3. Technologies and Requirements

- **C++:** Language used to implement the simulator.
- **C++ compiler:** The README gives `clang++` as an example.
- **macOS and Xcode Command Line Tools:** The environment identified in the project README.

## 4. Supported Cache Organizations

The program supports four cache types:

1. **Direct-mapped**
2. **2-way set-associative**
3. **4-way set-associative**
4. **Fully associative**

The README states that the Least Recently Used (LRU) replacement policy is used for set-associative and fully associative caches.

## 5. Program Output

For each memory reference, the simulator displays:

- Whether the reference is a cache hit or a cache miss.
- The cache contents after the reference.
- The final miss rate after the sequence has been processed.

These outputs allow the user to compare the behavior of the supported cache types.

## 6. Compilation

Open Terminal and navigate to the directory containing `SimpleCache.cpp`. Compile the program with the command below:

```bash
clang++ -isystem /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1 SimpleCache.cpp -o SimpleCache
```

The command creates an executable named `SimpleCache`.

## 7. Running the Program

After compiling, run:

```bash
./SimpleCache
```

Follow the program's prompts to enter the cache configuration and memory block addresses.

## 8. Sample Test Procedure

The project README provides this test input:

- Number of cache blocks: `4`
- Cache type: run each option, `1`, `2`, `3`, and `4`, separately
- Replacement policy: `1` (LRU)
- Number of block addresses: `5`
- Block address sequence: `0`, `8`, `0`, `6`, `8`

Run the program separately for each cache type to compare the results.

## 9. Recorded Test Results

The README reports the following results for the sample input:

| Cache type | Hits | Misses | Miss rate |
|---|---:|---:|---:|
| Direct-mapped | 0 | 5 | 100% |
| 2-way set-associative | 1 | 4 | 80% |
| 4-way set-associative | 2 | 3 | 60% |
| Fully associative | 2 | 3 | 60% |

For this sample sequence, the 4-way set-associative and fully associative configurations have the lowest recorded miss rate, while the direct-mapped configuration has the highest recorded miss rate. These results describe the supplied test case, not every possible memory-reference sequence.

## 10. Project Files

- `SimpleCache.cpp` — C++ source code for the simulator.
- `SimpleCache` — compiled executable produced by the compilation command.

## 11. Summary

Simple Cache Simulator demonstrates and compares four cache organizations using a configurable sequence of memory block addresses. It reports hits, misses, cache contents, and miss rate, making it possible to compare the sample behavior of each cache type.
