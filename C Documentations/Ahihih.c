#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *const p = &a;

    printf("p menunjuk a, nilai = %d\n", *p);
    *p = 50;
    printf("Nilai a sekarang = %d\n", a);

    int x;
    scanf("%d", &x);

    if (x < 0)      printf("X is below 0"),  printf("Lha iki 2 line");
    else if (x = 0) printf("X is 0");

    return 0;
}