#include <stdio.h>
#include <math.h>

void mesin_tarif(int total_biaya, int x, int y){

        for (total_biaya = 0; x <= y; x++){
            if (x == 1) break;
            total_biaya += 3000;
        }

        for (total_biaya; (x+1) <= y; x++){
            if(total_biaya == 15000) break;
            total_biaya += 2000;
        }

        if (y >=24){
            total_biaya = 15000;

            for (total_biaya = 0; x <= y; x++){
                if (x == 1) break;
                total_biaya += 3000;
                }

            for (total_biaya; (x+1) <= y; x++){
                if(total_biaya == 15000) break;
                total_biaya += 2000;
                }
        }
    printf("Total biaya     : Rp%d", total_biaya);
}

int main(){
    float menit;
    int total_biaya = 0;
    int jam_awal = 0;

    do {
        printf("Masukkan durasi parkir (menit): ");
        scanf("%f", &menit);

        if (menit <= 0) {
            printf("Durasi harus lebih dari nol.\n");
        }

    } while (menit <= 0);

    float jam = menit/60;
    int jam_2 = (int) ceil(jam);

    printf("Durasi parkir   : %g menit (ditagih %d jam)\n", menit, jam_2);
    mesin_tarif(total_biaya, jam_awal, jam_2);

}