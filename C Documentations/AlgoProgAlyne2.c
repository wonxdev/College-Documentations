#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char array[50] = {};
    printf("Masukkan Kalimat : ");
    scanf("%[^\n]", array);
    if (sizeof(array) < 50){
        int huruf = 0;
        int angka = 0;
        int spasi = 0;

        for (int i = 0; i < 10; i++){
            if(isalpha(array[i])) {
                huruf++;
            }
            else if (isdigit(array[i])){
                angka++;
            }
            else if (isblank(array[i])){
                spasi++;
            }
        }
        printf("Jumlah Huruf: %d\n", huruf);
        printf("Jumlah Angka: %d\n", angka);
        printf("Jumlah Spasi: %d\n", spasi);
    }
    else{
        printf("Peringatan komentar terlalu panjang untuk analisis emosi cepat");
    }

    

    return 0;
}