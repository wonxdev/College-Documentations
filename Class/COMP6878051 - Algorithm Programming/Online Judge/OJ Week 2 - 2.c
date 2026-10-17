/*
 * COMP6047 - Algorithm and Programming
 * Problem: W2-2 (Addition)
 *
 * Description:
 * Read 3 lines of mathematical equations in the format "[number]+[number]="
 * and print the result of the addition for each line.
 *
 * Input:
 *   3 lines, each containing: [number]+[number]=
 *   (values between -100000 and 100000)
 *
 * Output:
 *   For each line, print the result of a + b followed by a newline.
 *
 * Sample Input:
 *   2+2=
 *   4+3=
 *   1+-1=
 *
 * Sample Output:
 *   4
 *   7
 *   0
 */

#include <stdio.h>

int main() {
    int a, b;

    // Read and process 3 equations
    for (int i = 0; i < 3; i++) {
        scanf("%d+%d=", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}