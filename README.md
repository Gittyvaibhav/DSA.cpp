# DSA Practice Repository

This repository is a collection of C++ Data Structures and Algorithms practice programs. It is organized by topic and mostly contains small, standalone `.cpp` files that demonstrate one concept, pattern, or problem at a time.

The structure follows a learning path similar to Striver's DSA/TUF style: start with fundamentals, move through arrays, strings, recursion, linked lists, trees, graphs, and dynamic programming.

## Repository Snapshot

- Language: C++
- Main focus: DSA concepts, LeetCode-style problems, recursion/backtracking, trees, graphs, and dynamic programming
- Note: compiled `.exe` files are also present beside many source files

## Topic Map

| Folder | What it contains |
| --- | --- |
| `basics/` | Basic C++ and pattern-printing programs |
| `fuctions/` | Function declaration, return types, parameter passing, and practice programs |
| `timecomplexicity/` | Brute force vs optimized examples and time complexity basics |
| `arrays/` | Array declaration, input, size, min/max, linear search, sum, and memory examples |
| `arrays and vectors/` | Passing arrays to functions and array-pointer basics |
| `vectors/` | Vector operations, input, sorting, reversing, two-sum, and passing vectors to functions |
| `vectors2/` | Two-pointer patterns, rotation, merging sorted arrays, sorting 0s and 1s, and LeetCode 75 practice |
| `2darrays/` | Matrix input, addition, multiplication, transpose, rotation, wave print, spiral print, and max/sum operations |
| `2dvectors/` | 2D vector basics, Pascal triangle, 2D array functions, and conversion/practice problems |
| `strings/` | String basics, substrings, sorting, frequency, anagrams, stringstream, vowels, and conversion examples |
| `sorting/` | Bubble sort, selection sort, and insertion sort |
| `hashing/` | Basic hashing, string hashing, maps, and frequency-style examples |
| `recursion/` | Core recursion, backtracking, subsequences, subsets, combination sum, maze/stair paths, Tower of Hanoi, and Striver recursion problems |
| `linkedlist/` | Singly and doubly linked list node creation, insertion, and deletion |
| `binary Trees/` | Binary tree basics, BFS/DFS, traversals, max depth, balanced tree, diameter, path sum, LCA, symmetry, same tree, and zigzag traversal |
| `BinarySerachTrees/` | BST search, insert, delete, floor/ceil, kth minimum, LCA, validation, iterator, two-sum, and BST from preorder |
| `binary search/` | Binary search on answers, including square root |
| `graphs/` | Graph representation, BFS/DFS traversal, connected components, rotten oranges, topological sort, cycle detection, shortest path in DAG/unit-distance graph |
| `dynamic programming/` | DP introduction, memoization, tabulation, space optimization, 1D DP, 2D DP, subsequences, partition subset, and stock DP |
| `lccontests/` | Contest-specific practice solutions |

## How To Run A Program

Most files are independent programs. Open a terminal at the repository root and compile the file you want to run.

### Windows PowerShell

```powershell
g++ "arrays/sumofelements.cpp" -o sumofelements.exe
.\sumofelements.exe
```

### Linux/macOS/Git Bash

```bash
g++ "arrays/sumofelements.cpp" -o sumofelements
./sumofelements
```

For files inside folders with spaces, keep the path inside quotes:

```powershell
g++ "dynamic programming/1D Dp/frogjump/frogjump.cpp" -o frogjump.exe
.\frogjump.exe
```

## Suggested Learning Order

1. `basics/`
2. `fuctions/`
3. `timecomplexicity/`
4. `arrays/`, `vectors/`, `arrays and vectors/`
5. `2darrays/`, `2dvectors/`
6. `strings/`
7. `sorting/`
8. `hashing/`
9. `recursion/`
10. `linkedlist/`
11. `binary Trees/`
12. `BinarySerachTrees/`
13. `binary search/`
14. `graphs/`
15. `dynamic programming/`
16. `lccontests/`

## Notes About The Codebase

- Folder and file names are kept as they currently exist, including spelling variations like `fuctions`, `BinarySerachTrees`, and `timecomplexicity`.
- Many programs contain hardcoded sample data, while others read from standard input using `cin`.
- There is no shared test runner or build configuration yet.
- `tempCodeRunnerFile.cpp` files appear in a few folders and look like editor-generated scratch files.
- The repository currently includes compiled `.exe` outputs. For a cleaner source-only repository, these can be removed and ignored with `*.exe` in `.gitignore`.

## Contributing / Adding New Solutions

- Add each solution to the closest matching topic folder.
- Use descriptive filenames.
- Keep each example focused on one concept or problem.
- Prefer adding a short comment at the top when the problem statement is not obvious from the filename.
- Include sample input/output in comments when a program expects interactive input.


