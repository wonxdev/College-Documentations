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

// Read matrix dimensions (rows x columns)
if (scanf("%d %d", &rows, &cols) != 2) return 0;

int grid[rows][cols];
int row_sum[rows];
int col_sum[cols];

// Initialize row and column sum trackers to 0
for (int i = 0; i < rows; i++) {
    row_sum[i] = 0;
}
for (int j = 0; j < cols; j++) {
    col_sum[j] = 0;
}

// Read matrix elements and precompute sum of each row and column
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

// Evaluate every intersection (i, j) to find maximum gold
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        // Add row and column sums, subtracting overlapping cell to avoid double-counting
        int current_gold = row_sum[i] + col_sum[j] - grid[i][j];

        // Update maximum target coordinate if a higher sum is found
        if (current_gold > max_gold) {
            max_gold = current_gold;
            best_row = i + 1; // Convert 0-based array index to 1-based row
            best_col = j + 1; // Convert 0-based array index to 1-based column
        }
    }
}

// Print final results
printf("Row: %d\n", best_row);
printf("Column: %d\n", best_col);
printf("Gold: %d\n", max_gold);

return 0;