# Time Complexity
- Time taken by an algorithm to run.
- As a function of length of input.

# Why Time Complexity?
- For making better program.
- Comparison of algorithms.

# Complexity Notations
- Big O notation (Upper bound)
- Theta θ (Avg case)
- Omega Ω (Lower bound)
- Constant time -> O(1)
- Linear time -> O(n)
- Quadratic time -> O(n^2)
- Cubic time -> O(n^3)

**Order of complexity**
1. O(1)
2. O(log n)
3. O(n)
4. O(n logn)
5. O(n^2)
6. O(n^3)
7. O(2^n)
8. O(n!)

*Two loops-> '+'*
*Nested loops-> '*'*

# TLE Problem (Time Limit Exceeded)
- Most of the modern machines can perform 10^8 operations/second.
- Constraints are given in question( 1< n < 10^6), we have to solve according to this.
*Constraint Table*
< [10...11 ] | O(n!), O(n^6)
< [15...18 ] | O(2^n * n^2)
< [100     ] | O(n^4)
< [400     ] | O(n^3)
< [2000    ] | O(n^2 * log n)
< [10^4    ] | O(n^2)
< [10^6    ] | O(n log n)
< [10^8    ] | O(n),O(log n)