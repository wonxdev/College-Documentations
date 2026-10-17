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
#include <ctype.h>

int main() {
    int r;
    int c;

    printf("\nInput Matrix Dimensions (... ...): ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > 10 || c < 10 || c > 10) {
        printf("Invalid dimensions! Try again");
        return 0;
    } 
    else if ((0 < r && r < 11) && (0 < c && c < 11)) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf(" %c", &matrix[i][j]);
            }
        }
        char matrix[r][c];
    }

    int UpCount, ASCIISum;
    char MaxASCII = 0;
    char MinASCII = 127;
    UpCount  = 0;
    ASCIISum = 0;

    for (int a = 0; a < r; a++) {
        for (int b = 0; b < c; b++) {
            if (matrix[a][b] == '!') {
                break;
            } else if (matrix[a][b] == '#') {
                continue;
            }

            if (isalpha(matrix[a][b])) {
                if (isupper(matrix[a][b])) {
                    UpCount++;
                    if ((int)matrix[a][b] > (int)MaxASCII) {
                        MaxASCII = matrix[a][b];
                    }
                    if ((int)matrix[a][b] < (int)MinASCII) {
                        MinASCII = matrix[a][b];
                    }
                }
            }

            else if (isdigit(matrix[a][b])) {
                ASCIISum += (int)matrix[a][b];
                if ((int)matrix[a][b] > (int)MaxASCII) {
                    MaxASCII = matrix[a][b];
                }
                if ((int)matrix[a][b] < (int)MinASCII) {
                    MinASCII = matrix[a][b];
                }
            }
        }
    }
    
    printf("\n--- Matrix Analysis ---");
    printf("\nUppercase Count: %d", UpCount);
    printf("\nASCII Total Sum: %d", ASCIISum);
    if (MaxASCII == 0)       printf("\nMax ASCII Char: N/A");
    else if (MaxASCII > 0)  printf("\nMax ASCII Char: %c", MaxASCII);
    
    if (MinASCII == 127)      printf("\nMin ASCII Char: N/A");
    else if (MinASCII < 127) printf("\nMin ASCII Char: %c", MinASCII);

    return 0;
}