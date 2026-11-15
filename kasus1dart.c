#include <stdio.h>
int hitungpertarif(int jam, int biaya) {
int hari = jam/24;
int sisa = jam%24;

biaya = hari*15000;
for (int i=0; i<=sisa; i++) {
    if (i==0){
        biaya += 0;
    }
    else if (i==1) {
        biaya += 3000;
    }
    else {
        biaya += 2000;
    }
}

return biaya; 
}

int main () {
int menit, biaya = 0;
float jam;
printf("PROGRAM HITUNG TARIF PARKIR\n");
printf("===========================\n");
printf("masukkan durasi parkir : ");
scanf("%d", &menit);


if (menit <= 0) {
    printf("durasi harus lebih dari 0");
}
else if (menit <= 60){
    jam=1;
    printf("durasi anda adalah %.2f jam\n", jam);
}
else if (menit >= 60) {
    
    if (menit % 60 == 0) {
        jam = (menit / 60);
    }
    else {
        jam = (menit/60) + 1;
    }
    printf ("durasi anda adalah : %.1f jam\n", jam);
}
    int tarif = hitungpertarif(jam, biaya);
   printf ("total biaya anda adalah : Rp%d", tarif);
    return 0;
}

