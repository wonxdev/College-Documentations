/*
 * ============================================================
 *  PROBLEM: Addition
 * ============================================================
 *  Input Format
 *    The input consists of 3 lines of mathematical equations,
 *    separated by a space.
 *
 *  Output Format
 *    For each line, output the answer to that mathematical
 *    equation.
 *
 *  Constraints
 *    - Input values will always be between -100000 and 100000
 *      (the problem says 10000, probably a typo; int is still safe).
 *    - The input is GUARANTEED to always be in the format
 *      "[number] + [number] ="
 *
 *  Sample Input
 *    2 + 3 =
 *    4 + 3 =
 *    3 + -1 =
 *
 *  Sample Output
 *    5
 *    7
 *    2
 *
 * ============================================================
 *  EXPLANATION
 * ============================================================
 *  IDEA:
 *    Every line has the form "a + b =". We only need to read
 *    two numbers (a and b), add them, then print the result.
 *    Since there are 3 lines, we repeat this process 3 times.
 *
 *  STEP BY STEP:
 *    1. Declare variables a and b of type int.
 *       - The maximum value is 100000, so the maximum sum is
 *         200000, which is far below the int limit (~2.1 billion).
 *    2. Use a for loop that runs 3 times (once per line).
 *    3. Read the input with scanf("%d + %d =", &a, &b):
 *       - %d      -> reads an integer (including negatives,
 *                    e.g. "-1" is read as -1).
 *       - space   -> in a scanf format string, a space matches any
 *                    amount of whitespace (spaces/newlines).
 *       - "+"     -> a literal character that must match the input.
 *       - "="     -> also a literal character; it is read and discarded.
 *       So the "+" and "=" signs are automatically "consumed" by
 *       scanf and don't need to be stored in a variable.
 *    4. Print a + b with printf("%d\n", a + b).
 *
 *  TRACE (sample input):
 *    Line 1: "2 + 3 ="  -> a = 2,  b = 3   -> print 5
 *    Line 2: "4 + 3 ="  -> a = 4,  b = 3   -> print 7
 *    Line 3: "3 + -1 =" -> a = 3,  b = -1  -> print 2
 *
 *  COMPLEXITY:
 *    Time O(1) (always 3 lines), memory O(1).
 *
 *  NOTES:
 *    Because the input format is guaranteed to always be
 *    "[number] + [number] =", we don't need to check for other
 *    operators or malformed input.
 */

 #include <stdio.h>

 int main() {
    printf("Hello World!");

    return 0;
 }