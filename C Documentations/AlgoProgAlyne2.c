#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
    char arraytemp;
    int size = 0;
    char array[51];
    
    printf("=== Analisis Komentar Media Sosial === \n");
    printf("Masukkan Kalimat : ");
    scanf("%c", &arraytemp);
    
    while(arraytemp != '\n'){
        if (size >= 50){
            printf("\nPeringatan: Kalimat terlalu panjang!");
            return 0;
        }
        array[size] = arraytemp;
        size++;
        scanf("%c", &arraytemp);
    }
    array[size] = 0;
    
    printf("\n=== Validasi Komentar === ");
    int huruf = 0;
    int angka = 0;
    int spasi = 0;

    for (int i = 0; i < size; i++){
        if(isalpha(array[i])){
            huruf++;
        }
        else if (isdigit(array[i])){
            angka++;
        }
        else if (isspace(array[i])){
            spasi++;
        }
    }
    printf("\nJumlah Huruf: %d", huruf);
    printf("\nJumlah Angka: %d", angka);
    printf("\nJumlah Spasi: %d", spasi);
    
    for (int i = 0; i < size; i++){
        if(isalpha(array[i])){
            if(islower(array[i])){
                array[i] = toupper(array[i]);
                
            }
        }
    }
    
    printf("\n\n=== Hasil Kapitalisasi Komentar ===\n");
    for (int i = 0; i < size; i++){
        printf("%c", array[i]);
    }
    
    return 0;
}