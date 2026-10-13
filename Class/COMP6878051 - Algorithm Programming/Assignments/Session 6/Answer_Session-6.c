#include <stdio.h>

int main() {
    // ============================================================================
    // Question 7
    int number;

    for (number = 11; number <= 189; number++) {
        if ( number % 2 != 0) {
            printf("%d \n", number);
        }
    }

    // ============================================================================
    // Question 8
    int daycounter;
    int loopcounter;

    printf("\nInput Loop Time: ");
    scanf("%d", &loopcounter);

    int counter = 1;
    printf("\nInput Day Number: ");
    while (counter <= loopcounter) {
        scanf("%d", &daycounter);
        counter++;
    }

    for (counter = 1; counter <= loopcounter; counter++) {
        if (daycounter % 7 == 0)        printf("\n Sunday");
        else if (daycounter % 7 == 1)   printf("\n Monday");
        else if (daycounter % 7 == 2)   printf("\n Tuesday");
        else if (daycounter % 7 == 3)   printf("\n Wednesday");
        else if (daycounter % 7 == 4)   printf("\n Thursday");
        else if (daycounter % 7 == 5)   printf("\n Friday");
        else if (daycounter % 7 == 6)   printf("\n Saturday");
    }
    
    return 0;
}