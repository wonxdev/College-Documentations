#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    // char c = ' ';

    // if(isblank(c))
    //     printf("Karakter adalah spasi atau tab.\n");
    // else
    //     printf("Karakter bukan spasi atau tab\n");


    // // Is Digit
    // char c1 = '5';
    // if(isdigit(c1))
    //     printf("Karakter adalah digit.\n");
    // else
    //     printf("Karakter bukan digit.\n");

    // char c2 = 'A';
    // if(isupper(c2))
    //     printf("Karakter adalah huruf kapital.\n");
    // else
    //     printf("Karakter bukan huruf kapital.\n");

    // char w1[100], w2[100];
    // printf("Input String: ");
    // scanf("%[^\n]", w1); // Atau pake gets(w1);

    // int len = strlen(w1); // Cari panjang input

    // for(int i = 0; i < len; i++)
    //     w2[i] = toupper(w1[i]);

    // printf("%s\n", w2);

    // char str[100];
    // scanf("%[^\n]", str);
    // int up = 0, low = 0, digit = 0;

    // for(int i = 0; i < strlen(str); i++) {
    //     if(isupper(str[i]))     up++;
    //     if(islower(str[i]))     low++
    //     if(isdigit(str[i]))     digit++
    // }

    // printf("ToUpper: %d", up);
    // printf("ToLower: %d", low);
    // printf("Digit: %d" , digit);

        // char string1[100];
        // scanf("%s", &string1);
        // printf("%s", string1);

    int hasupper = 0, haslower = 0, hasspecial = 0, hasnumber = 0, haswhitespace = 0;
    char string2[100];
    const char *specials = "_/@-!?*#";

    printf("\nInput Password: ");
    scanf("%[^\n]", string2);

    int len = strlen(string2);

    if (len > 12) {
        printf("Invalid: Maximum length is 12 characters.\n");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (isupper((unsigned char)string2[i])) hasupper++;
        if (islower((unsigned char)string2[i])) haslower++;
        if (isdigit((unsigned char)string2[i])) hasnumber++;
        if (isspace((unsigned char)string2[i])) haswhitespace++;
        if (strchr(specials, string2[i]) != NULL) hasspecial++;
    }

    if (haswhitespace > 0) {
        printf("Invalid: Password must not contain whitespace.\n");
    } else if (hasupper == 0) {
        printf("Invalid: Password must contain an uppercase letter.\n");
    } else if (haslower == 0) {
        printf("Invalid: Password must contain a lowercase letter.\n");
    } else if (hasnumber == 0) {
        printf("Invalid: Password must contain a number.\n");
    } else if (hasspecial == 0) {
        printf("Invalid: Password must contain a special character (_/@-!?*#).\n");
    } else {
        printf("Password is valid!\n");
    }

    return 0;
}