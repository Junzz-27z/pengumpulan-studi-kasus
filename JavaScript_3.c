#include <stdio.h>
char nilaihuruf(int nilai){
    if (nilai <= 44){
        return 'E';
    }
    else if (nilai <= 59 ){
        return 'D';
    }
    else if (nilai <= 74){
        return 'C';
    }
    else if (nilai <= 84){
        return 'B';
    }
    else if (nilai <= 100){
        return 'A';
    }
    

}

int lulus(int arr[], int jumlah){
    int lolos;
    lolos = 0;
    for(int i = 0; i <= jumlah; i++){
        if (arr [i] <= 100 && arr[i] >= 75){
            lolos++;
        }
    }return lolos;
}

int main(){
    int JumlahMahasiswa;
    int jumlahLulus;
    int nilai[40];

    printf("masukan jumlah mahasiswa: ");
    scanf("%d", &JumlahMahasiswa);

    while( JumlahMahasiswa < 0 || JumlahMahasiswa > 40){
        printf("input tidak valid");
        printf("masukan jumlah mahasiswa: ");
        scanf("%d", &JumlahMahasiswa);
    }

    for (int i = 0; i < JumlahMahasiswa; i++){
        printf("masukan nilai mahasiswa %d: ", i + 1);
        scanf("%d", &nilai[i]);
        while(nilai[i] < 0 || nilai[i] > 100){
            printf("input tidak valid");
        }
    }
    for (int i = 0; i < JumlahMahasiswa; i++){
        printf("nilai mahasiswa %d: %c\n", i + 1, nilaihuruf(nilai[i]));
    }

    jumlahLulus = lulus(nilai, JumlahMahasiswa);

    printf("===== REKAP KUIS DASAR MAHASISWA (KKM 75) =====\n");
    printf("No|Nilai|Huruf|Keterangan \n");

    for (int i = 0; i < JumlahMahasiswa; i++){
        printf("%d | %d | %c | %c",i + 1, nilai[i], nilaihuruf(nilai[i]));
        if (nilai[i] > 75){
            printf("Lulus\n");
        }
        else
        printf("Remedial\n");
    }

    printf("jumlah mahasiswa yang remedial: %d\n", JumlahMahasiswa - jumlahLulus );
    printf("jumlah mahasiswa yang lulus: %d", jumlahLulus);
    }
