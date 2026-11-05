#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char password[101];

    scanf("%s", &password);

    // Check Length
    if (strlen(password) <= 10) {
        printf("Invalid");
        return 0;
    }

    // Check Kapital
    int UpperCounter = 0;
    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i]) != 0)      UpperCounter++;
    }
    if (UpperCounter == 0) {
        printf("Invalid");
        return 0;
    }

    // Check Huruf Kecil
    int LowerCounter = 0;
    for (int i = 0; i < strlen(password); i++) {
        if (islower(password[i]) != 0)          LowerCounter++;
    }
    if (LowerCounter == 0) {
        printf("Invalid");
        return 0;
    }

    // Check Angka
    int NumberCounter = 0;
    for (int i = 0; i < strlen(password); i++) {
        if (isdigit(password[i]) != 0)          NumberCounter++;
    }
    if (NumberCounter == 0) {
        printf("Invalid");
        return 0;
    }

    // Check Karakter
    int CharCounter = 0;
    for (int i = 0; i < strlen(password); i++) {
        if (isalnum(password[i]) == 0)          CharCounter++;
    }
    if (CharCounter == 0) {
        printf("Invalid");
        return 0;
    }

    printf("Valid");
    
    return 0;
}