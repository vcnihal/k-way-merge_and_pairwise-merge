# k-way-merge_and_pairwise-merge
Implementation and comparison of K-Way Merge using Min Heap and Pairwise Merge in C for sorted transaction lists.
# K-Way Merge and Pairwise Merge

## Problem Statement

A financial system receives three already sorted transaction lists:

L1 = 10, 30, 50, 70

L2 = 20, 40, 60, 80

L3 = 15, 35, 55, 75

The objective is to merge the sorted lists using:

1. K-Way Merge using Min Heap
2. Pairwise Merge

and compare their performance.

---

# Source Code

## Files Included

- k_way_merge.c
- pairwise_merge.c

---

# Input Data

L1 = 10, 30, 50, 70

L2 = 20, 40, 60, 80

L3 = 15, 35, 55, 75

---

# Execution Results

## K-Way Merge Using Min Heap

### Important Heap States

Initial Heap:

10 20 15

After extracting 10:

15 20 30

After extracting 15:

20 35 30

After extracting 20:

30 35 40

After extracting 30:

35 50 40

After extracting 35:

40 50 55

Final Merged Output:

10 15 20 30 35 40 50 55 60 70 75 80

Comparisons = 21

---

## Pairwise Merge

### Step 1

Merge L1 and L2

L1 = 10 30 50 70

L2 = 20 40 60 80

Result:

10 20 30 40 50 60 70 80

Comparisons = 7

### Step 2

Merge Temp and L3

Temp = 10 20 30 40 50 60 70 80

L3 = 15 35 55 75

Result:

10 15 20 30 35 40 50 55 60 70 75 80

Comparisons = 11

Total Comparisons = 18

---

# Performance Comparison

| Parameter                          | K-Way Merge | Pairwise Merge |
|------------------------------------|-------------|----------------|
| Heap Size                          | 3           | N/A 	          |  
| Comparisons                        | 21 	       | 18 	          |
| Time Complexity                    | O(n log k)  | O(nk)          |
| Space Complexity                   | O(k)        | O(n)           |
| Suitable for Large Number of Files | Yes         | No             |

---

# Complexity Analysis

## K-Way Merge Using Min Heap

### Time Complexity

O(n log k)

Explanation:

- Heap size is k.
- Each extraction/insertion requires O(log k).
- Total elements processed = n.
- Therefore total complexity = O(n log k).

### Space Complexity

O(k)

The heap stores one element from each list.

---

## Pairwise Merge

### Time Complexity

O(nk)

Explanation:

- Lists are merged repeatedly.
- Intermediate merged lists become larger after every merge.
- For k sorted lists, the total work grows approximately as O(nk).

### Space Complexity

O(n)

Additional temporary arrays are required for intermediate merged results.

---

# Conclusion

For the given input, Pairwise Merge required 18 comparisons while K-Way Merge required 21 comparisons. This occurs because heap maintenance introduces additional overhead when only three lists are involved.

However, K-Way Merge has a theoretical time complexity of O(n log k), whereas Pairwise Merge has a time complexity of O(nk). As the number of sorted transaction files increases, the performance advantage of K-Way Merge becomes significant.

Therefore, K-Way Merge using a Min Heap is the most suitable approach for large-scale transaction systems because it provides better scalability and overall efficiency when the number of sorted files increases.
