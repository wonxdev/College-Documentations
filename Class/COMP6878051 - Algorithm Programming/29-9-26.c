#include <stdio.h>

// int main() {
//     int nilai[5] = {65, 80, 70, 55, 90};
//     int *ptr = nilai;
//     int lulus = 0;

//     for (int i = 0; i < 5; i++) {
//             if (*(ptr + i) >= 70)     lulus++;    
//     }

//     printf("Jumlah lulus: %d\n", lulus);
//     return 0;
// }

int main() {
    char huruf = 'A';
    char teks[] = "A";

    printf("%c\n", huruf);
    printf("%s\n", teks);
    printf("%zu\n", sizeof(huruf));
    printf("%zu\n", sizeof(teks));
    printf("%zu\n", strlen(teks));

    printf("Huruf: %d\n", huruf);
    printf("Angka: %d\n", teks);
    return 0;
}