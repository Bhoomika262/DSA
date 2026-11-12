- Binary search is applied only on monotonic functions(either in ascending order or descending order).
- Elements should be monotonic.
* Example: 3|5|9|13|27
        Key:13
        1. Find the mid element.
        2. Is this equal to key? If yes, return index. If no, move to next step.
        3. Is key > mid element, focus on right part of array. Else, focus on left part.
        4. In our case, 13|27.
        5. Mid= (s+e)/2 ->13
        6. Is key= mid element? Yes.
        7. Return index.

# Time Complexity

- **Time complexity**: O(log n)

1. N/2^0
2. N/2^1
3. N/2^2
    |
    |
    |
    |
    |
   N/2^k =1 (lenth is one)
   N=2^k
   k=log N

# Applications
1. Lower/ upper bound
2. No. of occurences(using lower/upper bound)
3. Pivot element
4. Rotated array search
5. Reduce search space applications