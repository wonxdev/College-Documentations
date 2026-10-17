/*
 * COMP6047 - Algorithm and Programming
 * Problem: Secret Code
 *
 * Description:
 * Bibi fell into a dark hole in the Amazon forest and found codes on the wall.
 * Given a string S and Q operations consisting of pairs (L, R), reverse the 
 * substring from index L to index R (1-based index) sequentially for each pair.
 * Print the resulting string after all operations are completed.[cite: 1]
 *
 * Input:
 *   - First line: T (number of test cases).[cite: 1]
 *   - Each test case starts with Q (number of queries) and string S.[cite: 1]
 *   - Next Q lines: two integers L and R representing 1-based start and end indices to reverse.[cite: 1]
 *
 * Output:
 *   For each test case, print "Case #X: Y", where X is the testcase number (starting from 1)
 *   and Y is the transformed string.[cite: 1]
 *
 * Sample Input:
 *   2
 *   3 12345
 *   1 2
 *   2 3
 *   3 4
 *   3 992299
 *   1 6
 *   1 6
 *   3 4
 *
 * Sample Output:
 *   Case #1: 23415
 *   Case #2: 992299
 */

#include <stdio.h>

int main() {
    int T, Q;
    char results[101][1001];
    char temp;
    int L, R;

    scanf("%d", &T);

    for (int a = 1; a <= T; a++) {
        scanf("%d %s", &Q, results[a]);

        for (int b = 1; b <= Q; b++) {
            scanf("%d %d", &L, &R);
            int left = L - 1;
            int right = R - 1;

            while (left < right) {
                temp = results[a][left];
                results[a][left] = results[a][right];
                results[a][right] = temp;
                left++;
                right--;
            }
        }
    }

    for (int i = 1; i <= T; i++) {
        printf("Case #%d: %s\n", i, results[i]);
    }

    return 0;
}