#include <stdio.h>

int main()
{
    int arr1[10];
    
    printf("=== Input Value Matrix ===\n");
    
    for (int i = 0; i <= 9; i++) {
        printf("Masukkan Bilangan ke-%d: ", i+1);
        scanf("%d", &arr1[i]);
    }
    
    printf("\n=== Calculation ===");
    
    // Calculate Max Value
    int max = arr1[0];
    for (int i = 0; i < 10; i++) {
        if (arr1[i] > max) {
            max = arr1[i];
        } 
    }
    printf("\nMax Value in Array: %d", max);
    
    // Calculate Min Value
    int min = arr1[0];
    for (int i = 0; i < 10; i++) {
        if (arr1[i] < min) {
            min = arr1[i];
        } 
    }
    printf("\nMin Value in Array: %d", min);
    
    // Calculate Avg Value
    int avg = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr1[i];
    }
    avg = sum / 10;
    printf("\nAvg Value in Array: %d\n", avg);
    
    // Display Array Value
    printf("\n=== Array Value ===\n");
    for (int i = 0; i < 10; i++) {
        printf("| %d ", arr1[i]);
    }

    return 0;
}
