/*
 * COMP6047 - Algorithm and Programming
 * Problem: Are They Equal?
 *
 * Description:
 * Given 4 integers a, b, c, d, check whether the left-hand side operation
 * equals the right-hand side operation, following the template:
 *     a * b  ...  c - d
 * i.e., determine if (a * b) == (c - d).
 * Print "True" if they are equal, otherwise print "False".
 *
 * Input:
 *   4 integers: a b c d
 *   (0 <= a, b, c, d <= 10^6)
 *
 * Output:
 *   "True" if a * b == c - d, otherwise "False".
 *
 * Sample Input 1:  7 1 8 2
 * Sample Output 1: False
 *
 * Sample Input 2:  5 2 13 3
 * Sample Output 2: True
 *
 * Sample Input 3:  4 9 9 9
 * Sample Output 3: False
 */

#include <stdio.h>

int main () {
    int a, b, c, d;
    int ab, cd;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    ab = a * b;
    cd = c - d;

    if (ab == cd) {
    printf("True\n");
    } else {
    printf("False\n");
    }

    return 0;
}