#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Pi 3.14 /* Keyword define */
// Sekali di define disini, gabisa di ganti lagi di line manapun, nilai mutlak

int main() {
    int x;

    // // printf("Input nilai: ");
    // // scanf("%d", &x);
    // // getchar(); /*fflush(stdin); - Buat ngeflush biar inputnya siap buat ngedetect input baru */
    // // /* Kalau semua inputnya sama, gausah pake flush, kalau bda, harus di flush biar inputnya siap */

    // // char word[20]
    // // printf("Input word: ");
    // // scanf("[^/n]" /*- Buat string TERMASUK spasi*/, word);
    // // gets(word);

    // srand(time(null)); /*Kalau mau panggil rand, harus pake srand*/
    // x = rand() %50 + 20; /* rand ngebantu nge set batesan / perimeter buat randomizernya,*/
    // /* Sistem randomize e %max + min */
    
    // printf("%d", x);

    // // Casting and Suffix
    // // Convert data type
    // // Fungsi casting: Misal punya desimal, cuma butuh nilai int dari nomernya

    // // Const (Constant): Nilai variable nya jadi mutlak, gaisa diganti ganti
    // int number = 8;
    // number = 12; /* Kalau ga di const, bisa diganti variable nya di line lain */
    
    // // Define bisa dibuat dalam beberapa cara
    // // Define di taruh di bawah input library (DI ATAS)
    // // Define lewat const, di dalem main
    // const float Phi = 3.14;
    
    // // SizeOf
    // // Nyari ukuran sebuah variabel, tapi udah ada bbrp yang fix (char 1 byte, int 4 byte, dsb)
    // // Syntax = sizeof(expression)

    // printf("%zu\n", x); /* %zu = Unsigned integer type */
    // printf(sizeof(x));

    // // Suffix
    // // F / f = float
    // // L / l = long
    // // Default double data type

    // 3.14 /* Double */
    // 3.14f /* Float */
    // 3.14L /* Long */

    // // Functions used
    // // printf()
    // // putchar()
    // // putch()
    // // putc()

    // // Output Formatting - Cuma berlaku di printf

    // // Syntax = [flags] [width] [.precision] type

    printf ("%6d" /* Pesan 6 tempat DULUAN */, 34); /* OUTPUT: ....34 */
    printf ("%-6d" /* Pesan 6 tempat */, 34);       /* OUTPUT: 34.... */
    printf ("%10s",/* Pesan 10 tempat */ "BINUS");  /* OUTPUT: .....BINUS */

    printf("%3s %-20s %11s", "No.", "Nama", "NIM");
    printf("===========================================\n");
    printf("%3s %-20s %11s", "1", "Nathan", "3002799085");

    
    // =====================================================================================
    // Session 4
    // Logical Operators

    int n1 = 12, n2 = 6;

    printf("%i", )
    return 0;
} 