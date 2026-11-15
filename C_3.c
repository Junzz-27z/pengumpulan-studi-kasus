#include <stdio.h>
#include <stdlib.h>


// Function untuk mengubah nilai angka menjadi nilai huruf
// Perhatikan urutan pengecekan rentang nilai
char nilaiHuruf(int nilai) {
    // Tentukan huruf berdasarkan rentang nilai
    if (nilai >= 85) {
        return 'A';
    } else if (nilai >= 75) {
        return 'B';
    } else if (nilai >= 60) {
        return 'C';
    } else if (nilai >= 45) {
        return 'D';
    } else {
        return 'E';
    }
}

// Function untuk menghitung jumlah mahasiswa yang lulus (boleh dibuat sendiri)
int hitungLulus(int arr[], int n) {
    int count = 0;
    // Telusuri seluruh nilai
    for (int i = 0; i < n; i++) {
        // Hitung yang memenuhi KKM (75)
        if (arr[i] >= 75) {
            count++;
        }
    }
    // Kembalikan hasil hitungan
    return count;
}

int main() {
    system ("clear");
    int jumlahMahasiswa;
    int jumlahLulus = 0;
    int nilai[40];

    // Terima lalu validasi input jumlah mahasiswa
    do {
        printf("Masukkan jumlah mahasiswa (1-40): ");
        scanf("%d", &jumlahMahasiswa);
        
        // Periksa apakah jumlah mahasiswa valid
        if (jumlahMahasiswa < 1 || jumlahMahasiswa > 40) {
            printf("Jumlah tidak valid!\n");
        }
    } while (jumlahMahasiswa < 1 || jumlahMahasiswa > 40);

    // Terima nilai setiap mahasiswa
    // Gunakan struktur loop
    for (int i = 0; i < jumlahMahasiswa; i++) {
        // Validasi setiap nilai sebelum lanjut ke mahasiswa berikutnya
        do {
            printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
            // Ingat konsep array
            scanf("%d", &nilai[i]);
            
            if (nilai[i] < 0 || nilai[i] > 100) {
                printf("Nilai tidak valid!\n");
            }
        } while (nilai[i] < 0 || nilai[i] > 100);
    }

    // Hitung jumlah lulus
    jumlahLulus = hitungLulus(nilai, jumlahMahasiswa);

    // Tampilkan judul dan header tabel rekap
    printf("\n===== REKAP KUIS DASAR PEMROGRAMAN =====\n");
    printf("No | Nilai | Huruf | Keterangan\n");

    // Tampilkan satu baris per mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        // Cetak nomor, nilai, dan nilai huruf
        printf("%-2d | %-5d | %-5c | ", i + 1, nilai[i], nilaiHuruf(nilai[i]));
        
        // Tentukan keterangan berdasarkan KKM
        if (nilai[i] >= 75) {
            printf("Lulus\n");
        } else {
            printf("Remedial\n");
        }
    }

    // Tampilkan jumlah lulus dan jumlah remedial
    printf("Jumlah lulus    : %d\n", jumlahLulus);
    printf("Jumlah remedial : %d\n", jumlahMahasiswa - jumlahLulus);

    return 0;
}