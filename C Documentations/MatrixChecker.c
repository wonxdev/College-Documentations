/*
 * Problem: The Pixel Matrix Analyzer
 *
 * Description:
 * Read a matrix of characters representing a pixel canvas and calculate 
 * various summary statistics based on ASCII values and character types.
 *
 * Requirements & Rules:
 *   - Read matrix dimensions R (rows) and C (columns). Validate that 1 <= R, C <= 10.
 *     If out of bounds, repeatedly prompt with "Invalid dimensions! Try again.".
 *   - Read R x C characters into a 2D array char canvas[10][10], filtering out 
 *     whitespace characters.
 *   - Traverse the matrix using nested loops and process cells:
 *       * If character is '#', skip processing using 'continue'.
 *       * If character is '!', stop processing immediately using 'break'.
 *       * Count uppercase letters ('A' through 'Z').
 *       * Accumulate total sum of ASCII values.
 *       * Track maximum and minimum ASCII characters.
 *
 * Input:
 *   - First line: R and C (integers representing matrix dimensions).
 *   - Subsequent lines: R x C non-whitespace characters filling the matrix.
 *
 * Output:
 *   Display the summary statistics in the following format:
 *     --- Matrix Analysis ---
 *     Uppercase Count: <count>
 *     ASCII Total Sum: <sum>
 *     Max ASCII Char: <char> (ASCII <code_max>)
 *     Min ASCII Char: <char> (ASCII <code_min>)
 *   (If terminated early without processing characters, print "N/A" for max/min).
 *
 * Sample Input 1:
 *   3 3
 *   A B C
 *   # D 5
 *   x Y !
 *
 * Sample Output 1:
 *   --- Matrix Analysis ---
 *   Uppercase Count: 5
 *   ASCII Total Sum: 428
 *   Max ASCII Char: x (ASCII 120)
 *   Min ASCII Char: 5 (ASCII 53)
 *
 * Sample Input 2:
 *   12 5
 *   -1 4
 *   2 4
 *   ! A B C
 *   D E F G
 *
 * Sample Output 2:
 *   Invalid dimensions! Try again.
 *   Invalid dimensions! Try again.
 *   --- Matrix Analysis ---
 *   Uppercase Count: 0
 *   ASCII Total Sum: 0
 *   Max ASCII Char: N/A
 *   Min ASCII Char: N/A
 */

#include <stdio.h>

int main() {
    int r;
    int c;

    printf("\nInput Matrix Dimensions (... ...): ");
    scanf("%d %d", &r, &c);

    char matrix[r][c];

    if (r > 10) if (c > 10)     printf("Invalid dimensions! Try again");
    else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%c ", &matrix[r][c]);
            }
        }
    }
}