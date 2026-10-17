#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    int r, c;
    char Command[15];
    scanf("%d %d %s", &r, &c, &Command);

    int Matrix[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &Matrix[r][c]);
        }
    }

    char TRANSPOSE[] = "TRANSPOSE";

    int Command1 = strcmp(Command, TRANSPOSE);

    if (Command1 = 0) {
        
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", Matrix[r][c]);
        }
    }

    return 0;
}