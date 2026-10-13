#include <stdio.h>
#include <ctype.h>

int main () {
    char c = '';

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


    return 0;
}