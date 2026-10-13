#include <stdio.h>

int main () {
    int a = 7;
    int *p = &a;

    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &p);
    
    *p = 12;
    printf("%d\n", a);

    int **ptr = &p;
    printf("%d\n", *ptr)

    // Penerapan = Pointer dipake ketika masuk materi function, masuk parameter, parameter by value, by address, etc
    // Array juga bisa diakses menggunakan Pointer, tapi gabisa Pointer diakses lewat Array; Karena Array nyimpen value, pointer nyimpen address
    
    // Array[][][] -> 3 dimensi

    char name[20] = {'B', 'I', 'N', 'U', 'S'}; // Artinya kita punya 1 array, ukurannya 0-19
    // Jadinya |B|I|N|U|S| | | | | | | sampe slot ke 19
    // Array statis, udah pesen slot, pasti bakal segitu
    // Size = 20 byte

    int ar[] = {70, 20, 30, 50}; // Array boleh dikosongin kalau udah ada nilai awalnya
    // Namanya array dinamis
    // Size = 16 byte

    printf("%d\n", ar[0]);
    printf("%d\n", *ar); // 70, *ar = ar[0]
    printf("%d\n", sizeof(ar));
    
    int length = sizeof(ar)/sizeof(ar[0]); // Ngitung total usage dibagi salah satu usage
    
    int i;
    int min = ar[0];

    for(i = 0; i < length; i++) {
        printf("%d", ar[i]);
        if(min > ar[i]) min = ar[i]; 
    }

    // Array Homogenous - cuma bisa 1 data type dalam 1 array
    // Array Random Access - Isinya bebas, random, ga harus urut, boleh bebas, gausah sequential

    int n;
    printf("Input Number: ");
    scanf("%d", &n);

    int arrayN[n+1];


    // Input
    int arN[n+1];
    char arName[n+1][50];

    for (int b = 0; b < n; b++) {
        printf("Input Data Ke %d: ", b + 1);
        scanf("%d", &arN[b]); getchar();

        printf("Input Nama Ke %d: ", b + 1);
        scanf("%[^\n]", arName[b]) getchar();
    }

    printf(""%-15s %-5s\n, "Name", "Age");

    for (int c = 0; c < n; c++) {
        printf("%-15s %-3d\n", arName[c], arN[i]);
    }

    return 0;
}