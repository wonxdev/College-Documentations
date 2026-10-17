/*
 * COMP6047 - Algorithm and Programming
 * Problem: W1-2 (Birthday)
 *
 * Description:
 * Read a person's name and print a birthday greeting in the format
 * "Happy Birthday to [Name]."
 *
 * Input:
 *   A single line containing the name of the person (up to 100 characters,
 *   consisting of letters and spaces).
 *
 * Output:
 *   Print "Happy Birthday to [Name]." followed by a newline character.
 *
 * Sample Input:
 *   Bibi Jojo
 *
 * Sample Output:
 *   Happy Birthday to Bibi Jojo.
 */

#include <stdio.h>

int main() {
    char name[105];

    // Read a full line including spaces until newline
    scanf("%[^\n]", name);

    printf("Happy Birthday to %s.\n", name);

    return 0;
}