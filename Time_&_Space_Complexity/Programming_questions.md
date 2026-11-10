1. for(int i=0;i<n;i++)
    - Loop runs n times so O(n).

2. Swap array elemts (half)
    - Loop runs n/2 times so O(n).

*Two loops-> '+'*
*Nested loops-> '*'*

3.  int a = 0, b = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            a = a + j;
        }
    }
    for (k = 0; k < N; k++) {
        b = b + k;
    }

    - O(n*n+n)
    - O(n^2) + O(n)
    - O(n^2)

4.  int a = 0;
    for (i = 0; i < N; i++) {
        for (j = N; j > i; j--) {
            a = a + i + j;
        }
    }

    - Look for worst case(in the inner loop the worst case is from n to i=0).
    - O(n*n)
    - O(n^2)