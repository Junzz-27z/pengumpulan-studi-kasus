#include <stdio.h>

char nilaiHuruf(int nilai) {
    if (nilai >= 85 && nilai <= 100) {
        return 'A';
    } else if (nilai >= 75 && nilai <= 84) {
        return 'B';
    } else if (nilai >= 60 && nilai <= 74) {
        return 'C';
    } else if (nilai >= 45 && nilai <= 59) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int N;
    do {
        printf("Masukkan jumlah mahasiswa (1-40): ");
        scanf("%d", &N);
        if (N < 1 || N > 40) {
            printf("Jumlah tidak valid!\n");
        }
    } while (N < 1 || N > 40);

    int nilai[N];
    for (int i = 0; i < N; i++) {
        do {
            printf("Masukkan nilai mahasiswa ke-%d : ", i + 1);
            scanf("%d", &nilai[i]);
            if (nilai[i] < 0 || nilai[i] > 100) {
                printf("Nilai tidak valid!\n");
            }
        } while (nilai[i] < 0 || nilai[i] > 100);
    }
    
    printf("\n==== REKAP KUIS DASAR PEMPROGRAMAN (KKM 75) ====\n");
    printf("No| Nilai  |Huruf |Keterangan\n");
    int lulus = 0, remedial = 0;
    for (int i = 0; i < N; i++) {
        char huruf = nilaiHuruf(nilai[i]);
        const char* keterangan = (nilai[i] >= 75) ? "Lulus" : "Remedial";
        if (nilai[i] >= 75) {
            lulus++;
        } else {
            remedial++;
        }
        printf("%d\ | \t%d\ | \t%c\ | \t%s\n", i + 1, nilai[i], huruf, keterangan);
    }

    printf("\nJumlah lulus: %d\n", lulus);
    printf("Jumlah remedial: %d\n", remedial);

    return 0;
}