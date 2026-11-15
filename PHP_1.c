#include <stdio.h>

int hitungPerTarif(int jam, int biayaTotal) {
    if (jam <= 0) {
        return 0; 
    }
    if (jam == 1) {
        return 3000; 
    } else {
        int totalBiaya = 3000 + (jam - 1) * 2000; 
        return totalBiaya > 15000 ? 15000 : totalBiaya; 
    }
}

int main() {
    int durasiMenit;
    do {
        printf("Masukkan durasi parkir (menit): ");
        scanf("%d", &durasiMenit);
        printf("Durasi parkir: %d menit\n", durasiMenit);
        if (durasiMenit <= 0) {
            printf("Durasi harus lebih dari nol.\n");
        }
    } while (durasiMenit <= 0);


    int jam = (durasiMenit + 59) / 60; 
    int biayaTotal = 0;
    if (jam > 24) {
        int hariPenuh = jam / 24;
        int sisaJam = jam % 24;
        biayaTotal += hariPenuh * 15000; 
        biayaTotal += hitungPerTarif(sisaJam, biayaTotal); 
    } else {
        biayaTotal = hitungPerTarif(jam, biayaTotal);
    }

    printf("Total biaya parkir: Rp%d\n", biayaTotal);
    return 0;
}