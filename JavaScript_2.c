#include <stdio.h>

void tampilDenah(char denah[10][10], int b, int k){
    for (int i = 1; i <= b; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < k; j++)
        {
            printf("%c ", denah[i][j]);
        }
        printf("\n");
        
    }
    
}

int main(){
    int baris, kolom;
    printf("Masukan jumlah baris (1-10): ");
    scanf("%d", &baris);
    
    while (baris>10 || baris<1)
    {
        printf("Jumlah baris harus di antara 1 dan 10\n");
        printf("Masukan jumlah baris (1-10): ");
        scanf("%d", &baris);
    }
    printf("Masukan jumlah kolom (1-10): ");
    scanf("%d", &kolom);
    
    while (kolom>10 || kolom<1)
    {
        printf("Jumlah kolom harus di antara 1 dan 10\n");
        printf("Masukan jumlah kolom (1-10): ");
        scanf("%d", &kolom);
    }
    

    char denah[10][10];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            denah[i][j] = 'O';
        }
    
        //header
        for (int i = 1; i <= kolom; i++)
        {
            printf("  %d", i);
        }
    printf("\n");
        tampilDenah(denah,baris,kolom);
    }

    int r,c;
    printf("Pesan kursi baris 0 dan kolom 0 untuk selesai\n");
    printf("Pesan kursi (baris) : ");
    scanf("%d", r);
    printf("Pesan kursi (kolom) : ");
    scanf("%d", c);


        //tampilkan yg udah terganti
      tampilDenah(denah, baris, kolom);
    
    }    
    
    }
    

    
    
    
}