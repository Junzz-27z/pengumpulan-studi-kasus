#include<stdio.h>
#include<stdlib.h>


int hitungtarif(int jam, int biaya){
    int penuh,sisa;
    penuh = jam/24;
    sisa = jam % 24;
    for(int i = 1; i<=sisa; i++){
        if(i == 1){
            biaya = biaya + 3000;
        }else {
            biaya = biaya + 2000;
        }
    }
    if(biaya>15000){
        biaya = 15000;
    }
    return biaya + (penuh*15000);
}   




int main(){
    int menit;
    int biaya = 0;
    system("cls");
    printf("Masukkan Durasi Parkir (Menit) = ");
    scanf("%d", &menit);
    while(menit<=0){
        printf("Durasi Harus Lebih Dari Nol\n");
        printf("Masukkan Durasi Parkir (Menit) = ");
        scanf("%d", &menit);
    }
    int jam;
    jam = (menit + 59)/60;
    int tarif = hitungtarif(jam,biaya);
    printf("Durasi Parkir = %d menit (Ditagih %d jam)\n", menit, jam);
    printf("Total Biaya = %d", tarif);
        
    return 0;
}