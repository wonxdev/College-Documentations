#include <stdio.h>
#include <ctype.h>

int main() {
    int r, c;

    // 1. Input validation loop
    do {
        scanf("%d %d", &r, &c);
        if (r < 1 || r > 10 || c < 1 || c > 10) {
            printf("Invalid dimensions! Try again.\n");
        }
    } while (r < 1 || r > 10 || c < 1 || c > 10);

    // 2. Declare and fill the 2D character array
    char canvas[10][10];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf(" %c", &canvas[i][j]); // Leading space ignores whitespace
        }
    }

    // 3. Initialize processing counters & tracking variables
    int UpCount = 0;
    int ASCIISum = 0;
    int processed = 0;
    
    char MaxASCII = 0;    // Smallest possible initial ASCII value
    char MinASCII = 127;  // Largest possible initial ASCII value
    
    int stop = 0; // Flag to stop outer loop when '!' is found

    // 4. Matrix processing
    for (int i = 0; i < r && !stop; i++) {
        for (int j = 0; j < c; j++) {
            char ch = canvas[i][j];

            if (ch == '!') {
                stop = 1; // Signal outer loop to stop
                break;    // Exit inner loop
            }
            if (ch == '#') {
                continue; // Skip '#' cell
            }

            // Process valid character
            processed++;
            ASCIISum += ch;

            if (isupper(ch)) {
                UpCount++;
            }

            if (ch > MaxASCII) MaxASCII = ch;
            if (ch < MinASCII) MinASCII = ch;
        }
    }

    // 5. Output results
    printf("--- Matrix Analysis ---\n");
    printf("Uppercase Count: %d\n", UpCount);
    printf("ASCII Total Sum: %d\n", ASCIISum);

    if (processed > 0) {
        printf("Max ASCII Char: %c (ASCII %d)\n", MaxASCII, MaxASCII);
        printf("Min ASCII Char: %c (ASCII %d)\n", MinASCII, MinASCII);
    } else {
        printf("Max ASCII Char: N/A\n");
        printf("Min ASCII Char: N/A\n");
    }

    return 0;
}