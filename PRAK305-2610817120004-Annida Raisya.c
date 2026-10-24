#include <stdio.h>

int main() {
    int total_detik;
    for (int i = 0; i < 5; i++) {
        printf("Input: ");
        scanf("%d", &total_detik);

        int hari = total_detik / 86400;
        int sisa = total_detik % 86400;

        int jam = sisa / 3600;
        sisa %= 3600;

        int menit = sisa / 60;
        int detik = sisa % 60;

        if (hari > 0) {
            printf("Output: %d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
        } else {
            printf("Output: %02d:%02d:%02d\n", jam, menit, detik);
        }
    }
    return 0;
}