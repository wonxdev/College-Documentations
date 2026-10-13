/*
COMP6047 - Algorithm and Programming
Problem: Treasure Hunt

Description:
Read the dimensions of a 2D array (rows x columns) and its grid elements.
Find the row and column intersection that maximizes the total sum of gold
along that row and column. The element at the intersection point is included
only once (deducted from double-counting).

Input:
First line: [rows] [columns]
Following lines: [rows] x [columns] matrix containing integer gold values.

Output:
Row: [selected 1-based row index]
Column: [selected 1-based column index]
Gold: [maximum total gold value]

Sample Input:
3 3
1 2 3
4 5 6
7 8 9

Sample Output:
Row: 3
Column: 3
Gold: 33
*/

#include <stdio.h>

int main() {
int rows, cols;

#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int grid[rows][cols];
    int row_sum[rows];
    int col_sum[cols];

    // Initialize sum arrays to 0
    for (int i = 0; i < rows; i++) row_sum[i] = 0;
    for (int j = 0; j < cols; j++) col_sum[j] = 0;

    // Read elements and precompute row and column sums
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &grid[i][j]);
            row_sum[i] += grid[i][j];
            col_sum[j] += grid[i][j];
        }
    }

    int max_gold = -1;
    int best_row = -1;
    int best_col = -1;

    // Find the coordinate with the maximum gold sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Row sum + Column sum - overlapping cell
            int current_gold = row_sum[i] + col_sum[j] - grid[i][j];

            if (current_gold > max_gold) {
                max_gold = current_gold;
                best_row = i + 1; // Convert 0-indexed loop to 1-indexed output
                best_col = j + 1;
            }
        }
    }

    printf("Row: %d\n", best_row);
    printf("Column: %d\n", best_col);
    printf("Gold: %d\n", max_gold);

    return 0;
}