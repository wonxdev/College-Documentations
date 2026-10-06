#include <stdio.h>

int main () {
    int Responden;
    double Sum, Mean;
    
    printf("Masukkan Jumlah Responden: ");
    scanf("%d", &Responden);

    int TingkatKecemasan[Responden][4];

    printf("\n==============================================");

    for (int i = 0; i < Responden; i++) {
        printf("\nTingkat Kecemasan Responden ke-%d \n", i + 1);

        for (int j = 0; j < 4; j++) {
            printf("  Masukkan Tingkat Kecemasan Responden %d minggu ke-%d (1-10): ", i + 1, j + 1);
            scanf("%d", &TingkatKecemasan[i][j]);
        }
    }
    
    printf("\nInput Data Tingkat Kecemasan Responden Selesai.");
    printf("\n\n==============================================");
    
    printf("\nRata - Rata Tingkat Kecemasan");

    for (int k = 0; k < Responden; k++) {
        Sum = 0;

        for (int l = 0; l < 4; l++) {
            Sum += TingkatKecemasan[k][l];
        }

        Mean = Sum / 4;
        printf("\n -Responden %d: %.2f", k + 1, Mean);
    }

    printf("\n\n==============================================");
    printf("\nTekan Enter untuk keluar...");
    getchar();
    getchar();
    return 0;
}