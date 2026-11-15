#include <stdio.h>
#include <stdbool.h>

char hurufNilai(int nilai){
    if (nilai>=85)
    {
        return 'A';
    } else if (nilai>=75)
    {
        return 'B';
    } else if (nilai>=60)
    {
        return 'C';
    } else if (nilai>=45)
    {
        return 'D';
    } else
    {
        return 'E';
    }
    
}

bool statusLulus(int nilai){
    if (nilai >= 75)
    {
        return true;
    } else {
        return false;
    }
    
}

int main(int argc, char const *argv[])
{
    const int jumlah_mahasiswa = 1;
    while (true)
    {
        printf("\nMasukkan jumlah mahasiswa (1-40): ");
        scanf("%d", &jumlah_mahasiswa);

        if (1 <= jumlah_mahasiswa && 40 >= jumlah_mahasiswa)
        {
            break;
        }
        
        printf("\njumlah tidak valid!");
    }
    
    int jumlah_lulus = 0;

    int mahasiswa[40];

    int bufferInput = 0;

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        printf("nilai mahasiswa[%d]: ", i + 1);
        scanf("%d", &bufferInput);
        if (0 <= bufferInput && bufferInput <= 100)
        {
            mahasiswa[i] = bufferInput;
        } else {
            printf("nilai tidak valid!\n");
            i = i-1; //agar di kondisi loop sebelumnya index sama, dan bisa meminta ulang input
            continue;
        }
    }

    printf("==== REKAP KUIS DASAR PEMROGRAMAN (KKM 75) ====\n");
    printf("|No\t|Nilai\t|Huruf\t|Keterangan|");
    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        printf("\n|");
        //No
        printf("%d", i+1);

        printf("\t");
        printf("|");

        //nilai
        printf("%d", mahasiswa[i]);

        printf("\t");
        printf("|");

        //Huruf
        printf("%c", hurufNilai(mahasiswa[i]));

        printf("\t");
        printf("|");

        //Status Lulus
        if (statusLulus(mahasiswa[i]))
        {
            jumlah_lulus++;
            printf("Lulus     ");
        } else {
            printf("Remedial  ");
        }

        printf("|");
    }
    
    printf("\nJumlah lulus: %d", jumlah_lulus);
    printf("\nJumlah remedial: %d", jumlah_mahasiswa - jumlah_lulus);
    return 0;
}
