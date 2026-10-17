/*
 * COMP6047 - Algorithm and Programming
 * Problem: eltit a si sihT (Week 4 - Problem 2)
 *
 * Description:
 * Given a string S consisting of lowercase letters ('a' to 'z') and spaces,
 * reverse the string S and print it.
 * Note: Problem specifies using functions and recursion.
 *
 * Input:
 *   - First line: T (number of test cases).
 *   - Each test case consists of a single line containing string S.
 *
 * Output:
 *   For each test case, print "Case #X: " followed by string S in reverse order.
 *
 * Sample Input:
 *   3
 *   trouble in town
 *   when i need a friend
 *   champion of the world
 *
 * Sample Output:
 *   Case #1: nwot ni elbuort
 *   Case #2: dneirf a deen i nehw
 *   Case #3: dlrow eht fo noipmahc
 */

#include <stdio.h>
#include <string.h>

void printReverse(char *str, int index) {
    if (index < 0) {
        return;
    }
    printf("%c", str[index]);
    printReverse(str, index - 1);
}

int main() {
    int t;
    scanf("%d\n", &t);

    for (int tc = 1; tc <= t; tc++) {
        char s[1005];
        fgets(s, sizeof(s), stdin);

        // Remove trailing newline character if present
        int len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
            len--;
        }

        printf("Case #%d: ", tc);
        printReverse(s, len - 1);
        printf("\n");
    }

    return 0;
}