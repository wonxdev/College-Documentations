#include <stdio.h>

int main() {
    printf("\n**Algorithm & Programming Assignment**");
    printf("\n             -Week 5-");
    printf("\n    Nathan Suwiji - 3002799085\n\n");
    // ============================================================================
    // Number 1
    float GPA;

    printf("\n=== Student GPA Categorizer ===\n");
    printf("Input Student GPA: ");
    scanf("%f", &GPA);

    if (GPA >= 3.5 && GPA <= 4)       printf("Cumlaude\n");
    else if (GPA >= 3 && GPA < 3.5)   printf("Outstanding\n");
    else if (GPA >= 2.5 && GPA < 3)   printf("Very Good\n");
    else if (GPA >= 2 && GPA < 2.5)   printf("Good\n");
    else if (GPA >= 0 && GPA < 2)     printf("Poor\n");
    else                              printf("GPA Invalid. Please try again.\n");

    // ============================================================================
    // Number 2
    int grade;

    printf("\n=== Student Grade Categorizer ===\n");
    printf("Input Student Grade: ");
    scanf("%d", &grade);

    if (grade >= 85 && grade <= 100)       printf("A\n");
    else if (grade >= 75 && grade < 85)    printf("B\n");
    else if (grade >= 65 && grade < 75)    printf("C\n");
    else if (grade >= 50 && grade < 65)    printf("D\n");
    else if (grade >= 0 && grade < 50)     printf("F\n");
    else                                   printf("Grade Invalid. Please try again.\n");

    // ============================================================================
    // Number 3
    float temp;

    printf("\n=== Temperature Categorizer ===\n");
    printf("Input Temperature (°C): ");
    scanf("%f", &temp);

    if (temp >= 35)                    printf("Very Hot\n");
    else if (temp >= 30 && temp < 35)  printf("Hot\n");
    else if (temp >= 20 && temp < 30)  printf("Normal\n");
    else if (temp < 20)                printf("Cold\n");
    else                               printf("Temperature Invalid. Please try again.\n");
    
    // ============================================================================
    // Number 4
    int age;
    
    printf("\n=== Age Categorizer ===\n");
    printf("Input Age (in Year(s)): ");
    scanf("%d", &age);

    if (age >= 60)                      printf("Elderly\n");
    else if (age >= 19 && age < 60)     printf("Adult\n");
    else if (age >= 13 && age < 19)     printf("Teenagers\n");
    else if (age >= 6 && age < 13)      printf("Children\n");
    else if (age >= 0 && age < 6)       printf("Toddler\n");
    else                                printf("Age Invalid. Please Try again.");

    // ============================================================================
    return 0;
}