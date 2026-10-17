/*
 * COMP6047 - Algorithm and Programming
 * Problem: SUMmer Vacation
 *
 * Description:
 * Calculate the "cool factor" of an array A of N numbers. The cool factor is the number
 * of elements in A that can be expressed as the sum of two distinct elements in A
 * (i.e., A[i] = A[j] + A[k] where j != i and k != i and j != k).
 *
 * Input:
 *   - First line: T (number of test cases).
 *   - Each test case consists of 2 lines:
 *       - First line: N (number of elements).
 *       - Second line: N space-separated integers representing the array A.
 *
 * Output:
 *   For each test case, print "Case #X: C", where X is the testcase number (starting from 1)
 *   and C is the cool factor count.
 *
 * Sample Input:
 *   2
 *   6
 *   1 4 3 5 2 2
 *   4
 *   6 15 9 3
 *
 * Sample Output:
 *   Case #1: 3
 *   Case #2: 2
 */

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n, a[200], cool = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        for (int i = 0; i < n; i++) {
            int found = 0;
            for (int j = 0; j < n && !found; j++) {
                if (j == i) continue;
                for (int k = j + 1; k < n; k++) {
                    if (k == i) continue;
                    if (a[j] + a[k] == a[i]) {
                        found = 1; 
                        break;
                    }
                }
            }
            cool += found;
        }
        printf("Case #%d: %d\n", tc, cool);
    }
    return 0;
}