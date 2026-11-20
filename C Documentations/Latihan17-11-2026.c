#include <stdio.h>

struct Student {
    int number;
    char name[51];
    char birthplace[51];
    struct birthdate {
        int date;
        int month;
        int year;
    };
    struct address {
        char streetname[101];
        int streetnum;
        char city[101];
        char province[101];
    };
};

int main() {
    for (int i = 0; i < 5; i++) {
        struct Student S[i];

        
    }

    // Number
    printf("Input Student Number: ");
    scanf("%d", Student.number);
    
    // Name


    // Address
    // Street Name
    // Street Number
    // City
    // Province


    // Place Of Birth


    // Date of Birth (DD-MM-YYYY)




    return 0;
}