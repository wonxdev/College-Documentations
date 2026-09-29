/*
 * COMP6047 - Algorithm and Programming
 * Problem: Three Elevators
 *
 * Description:
 * There are 3 identical elevators (speed = 1 floor/second) in a building.
 * One elevator is under maintenance and stays fixed at floor k.
 * The other two are moving:
 *   - Elevator 1 starts at floor x and moves UP.
 *   - Elevator 2 starts at floor y and moves DOWN.
 * Determine the time t (in seconds) at which all three elevators are at
 * the same floor. If this never happens, output -1.
 *
 * Input:
 *   3 integers: x y k
 *   (0 <= x, y, k <= 100)
 *
 * Output:
 *   A single integer t (time when all three elevators meet at the same
 *   floor), or -1 if it's impossible.
 *
 * Sample Input 1:  3 5 4
 * Sample Output 1: 1
 *
 * Sample Input 2:  1 2 5
 * Sample Output 2: -1
 */

#include <stdio.h>

int main () {
    int x, y, k;

    scanf("%d %d %d", &x, &y, &k);
    if (x <= y && (k-x == y-k))        printf("%d\n", k-x);
    else printf("-1\n");

    return 0;
}