/*
 * COMP6047 - Algorithm and Programming
 * Problem: Addition
 *
 * Description:
 * Read 3 lines, each in the format "a + b =", and print the sum
 * a + b for each line.
 *
 * Input:
 *   3 lines, each: [number] + [number] =
 *   (values between -100000 and 100000)
 *
 * Output:
 *   For each line, print the result of a + b.
 *
 * Sample Input:
 *   2 + 3 =
 *   4 + 3 =
 *   3 + -1 =
 *
 * Sample Output:
 *   5
 *   7
 *   2
 */

#include <stdio.h>

int main() {
    int a, b;
    
    // Process line 1
    scanf("%d + %d =", &a, &b);
    printf("%d\n", a + b);
    
    // Process line 2
    scanf("%d + %d =", &a, &b);
    printf("%d\n", a + b);
    
    // Process line 3
    scanf("%d + %d =", &a, &b);
    printf("%d\n", a + b);

    return 0;
}