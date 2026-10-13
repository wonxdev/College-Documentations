#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    char c = ' ';

    if(isblank(c))
        printf("Karakter adalah spasi atau tab.\n");
    else
        printf("Karakter bukan spasi atau tab\n");


    // Is Digit
    char c1 = '5';
    if(isdigit(c1))
        printf("Karakter adalah digit.\n");
    else
        printf("Karakter bukan digit.\n");

    char c2 = 'A';
    if(isupper(c2))
        printf("Karakter adalah huruf kapital.\n");
    else
        printf("Karakter bukan huruf kapital.\n");

    char w1[100], w2[100];
    printf("Input String: ");
    scanf("%[^\n]", w1); // Atau pake gets(w1);

    int len = strlen(w1); // Cari panjang input

    for(int i = 0; i < len; i++)
        w2[i] = toupper(w1[i]);

    printf("%s\n", w2);

    return 0;
}