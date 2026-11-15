#include <stdio.h>

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main() {
    int x, y;

    do {
        printf("Masukan hari ronda Made: ");
        scanf("%d", &x);
        if(x >= 1 || x <= 7) {
            printf("hari tidak valid\n");
        }
    } while(x >= 1 && x <=7 );

    do {
        printf("Masukan hari ronda Komang: ");
        scanf("%d", &y);
        if(y >= 1 || y <= 7) {
            printf("%d", y);
        }
    } while (y <= 1 && y >=7);

    if (x == y) {
            printf("jadwal sama, tidak perlu ditukar\n");
        } else if (x >= y) {
            tukar(&x, &y);
            printf("Nilai setelah tukar: %d %d\n", x, y);
        }
    return 0;
}