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
        if (daycounter % 7 == 0)        printf("Sunday");
        else if (daycounter % 7 == 1)   printf("Monday");
        else if (daycounter % 7 == 2)   printf("Tuesday");
        else if (daycounter % 7 == 3)   printf("Wednesday");
        else if (daycounter % 7 == 4)   printf("Thursday");
        else if (daycounter % 7 == 5)   printf("Friday");
        else if (daycounter % 7 == 6)   printf("Saturday");
    }
    
    return 0;
}