#include <stdio.h>

void tampilkanDenah (char denah[10][10], int b, int k) {
    for (int i = 0; i < b; i++) {
        printf("%d ", i+1);
        for (int j = 0; j < k; j++) {
            printf("%c ", denah[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int baris = 0;
    int kolom = 0;

    char denah[10][10];

    printf("Masukkan jumlah baris (1-10): ");
    scanf("%d", &baris);
    while (baris < 1 || baris > 10) {
        printf("Jumlah baris harus antara 1 dan 10.\n");
        printf("Masukkan jumlah baris (1-10): ");
        scanf("%d", &baris);
    }

    printf("Masukkan jumlah kolom (1-10): ");
    scanf("%d", &kolom);
    while (kolom < 1 || kolom > 10) {
        printf("Jumlah kolom harus antara 1 dan 10.\n");
        printf("Masukkan jumlah kolom (1-10): ");
        scanf("%d", &kolom);
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            denah[i][j] = ' ';
        }
    }

    printf("Denah yang ditampilkan:\n");
    tampilkanDenah(denah, baris, kolom);

    int r, c;
    printf("Denah awal:\n");
    do {
        printf("Pesan kursi baris 0 dan kolom 0 untuk selesai.\n");
        printf("Pesan kursi (baris): ");
        scanf("%d", &r);
        printf("Pesan kursi (kolom): ");
        scanf("%d", &c);
        if (r == 0 && c == 0) {
            break;
        }
        else if (r > baris || c > kolom){
            printf("Kursi [%d][%d] di luar denah!", r, c);
        }
        else if (denah[r-1][c-1] == 'X') {
            printf("Kursi [%d][%d] sudah diterisi!", r, c);
        }
        else {
            denah[r-1][c-1] = 'X';
            printf("Kursi [%d][%d] berhasil dipesan!\n", r, c);
            for (int i = 1; i <= kolom; i++) {
                printf(" %d", i);
            }

                printf("\n");
        }
    } while (r != 0 || c != 0);

    printf("Denah akhir:\n");
    printf(" ");
    for (int j = 0; j < kolom; j++) {
        printf(" %d", j+1);
    }
    printf("\n");
    tampilkanDenah(denah, baris, kolom);

    return 0;
}