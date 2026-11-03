#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dnd[4][4];
int kwk[4];
int hasil[4];

int main() {
    srand(time(NULL));

    printf("Matrix D:\n");
    for(int baris = 0; baris < 4; baris++) {
        for(int kolom = 0 ;kolom < 4; kolom++) {
            dnd[baris][kolom] = rand() % 10;
            printf("%d ", dnd[baris][kolom]);
        }
        printf("\n");
    }

    printf("\nVektor K:\n");
    for(int baris = 0; baris < 4; baris++) {
        kwk[baris] = rand() % 10;
        printf("%d \n", kwk[baris]);
    }

    printf("\nHasil Perkalian:\n");
    for(int baris = 0; baris < 4; baris++) {

        for(int kolom = 0; kolom < 4; kolom++) {
        hasil[baris] += dnd[baris][kolom] * kwk[kolom];
        }
        printf("%d ", hasil[baris]);
        printf("\n");
    }

    return 0;
}