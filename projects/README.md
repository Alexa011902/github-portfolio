# Simple Cache Simulator
# Cache Project

**Student:** Skyla Valle  
**Course:** COSC 4310  
**Project:** Cache Simulation  
**Due Date:** November 4, 2026

## Overview
This program simulates a cache using C++. It supports four cache types:
- Direct-mapped
- 2-way set-associative
- 4-way set-associative
- Fully associative

The program uses the Least Recently Used (LRU) replacement policy for set-associative and fully associative caches. It displays whether each memory reference is a hit or miss, the cache contents after each reference, and the final miss rate.

## Requirements
- C++ compiler (such as `clang++`)
- macOS with Xcode Command Line Tools installed

## How to Compile
Open Terminal and navigate to the project folder:

```bash
cd "$HOME/Documents/COSC 4310/project/part 2 /CacheProject."
```

Compile the program:

```bash
clang++ -isystem /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1 SimpleCache.cpp -o SimpleCache
```

## How to Run

```bash
./SimpleCache
```

## How to Test
When prompted, enter:
- Number of cache blocks: `4`
- Cache type: choose `1`, `2`, `3`, or `4`
- Replacement policy: `1` (LRU)
- Number of block addresses: `5`
- Block address sequence: `0`, `8`, `0`, `6`, `8`

Run the program separately for each cache type to compare the results.

## Test Results

| Cache Type | Hits | Misses | Miss Rate |
|---|---:|---:|---:|
| Direct-mapped | 0 | 5 | 100% |
| 2-way set-associative | 1 | 4 | 80% |
| 4-way set-associative | 2 | 3 | 60% |
| Fully associative | 2 | 3 | 60% |

## Files
- `SimpleCache.cpp` — C++ source code
- `SimpleCache` — compiled executable
