#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *const p = &a;

    printf("p menunjuk a, nilai = %d\n", *p);
    *p = 50;
    printf("Nilai a sekarang = %d\n", a);

    return 0;
}