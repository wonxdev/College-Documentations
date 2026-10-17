/*
 * COMP6047 - Algorithm and Programming
 * Problem: Jellyfish Dance
 *
 * Description:
 * Bibi recorded video views for N consecutive days. Q friends ask for the total
 * number of views gained starting from day A_i to day B_i (1-based index).
 * Compute and print the sum of views for each query.[cite: 7]
 *
 * Input:
 *   - First line: N (number of days).[cite: 7]
 *   - Second line: N space-separated integers representing daily view counts.[cite: 7]
 *   - Third line: Q (number of queries).[cite: 7]
 *   - Next Q lines: two integers A_i and B_i (start and end days).[cite: 7]
 *
 * Output:
 *   For each query, print "Case #X: Y", where X is the query number (starting from 1)
 *   and Y is the sum of views from day A_i to day B_i.[cite: 7]
 *
 * Sample Input:
 *   5
 *   2 5 1 9 7
 *   4
 *   1 1
 *   1 3
 *   2 5
 *   4 5
 *
 * Sample Output:
 *   Case #1: 2
 *   Case #2: 8
 *   Case #3: 22
 *   Case #4: 16
 */

#include <stdio.h>

int main () {
    int TotalDays;
    scanf("%d", &TotalDays);
    int ViewsPerDay[TotalDays];
    for (int i = 0; i < TotalDays; i++ ) {
        scanf("%d", &ViewsPerDay[i]);
    }
    int TotalFriends;
    scanf("%d", &TotalFriends);
    int DayToDayView[TotalFriends][2];
    for (int i = 0; i < TotalFriends; i++) {
        scanf("%d %d", &DayToDayView[i][0], &DayToDayView[i][1]);
    }
    for (int i = 0; i < TotalFriends; i++) {
        int TotalViews;
        TotalViews = 0;
        for (int j = DayToDayView[i][0] - 1; j < DayToDayView[i][1]; j++) {
            TotalViews += ViewsPerDay[j];
        }
        printf("Case #%d: %d\n", i+1, TotalViews);
    }
    return 0;
}