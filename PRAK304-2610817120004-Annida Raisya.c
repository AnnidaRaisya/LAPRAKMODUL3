#include <stdio.h>

int main() {
    int a;
    for (int i = 0; i < 5; i++) {
        printf("Input: ");
        scanf("%d", &a);

        if (a == 0) printf("Output: Nol\n");
        else if (a >= 1 && a <= 9) printf("Output: Satuan\n");
        else if (a >= 10 && a <= 19) printf("Output: Belasan\n");
        else if (a >= 20 && a <= 99) printf("Output: Puluhan\n");
        else printf("Output: Anda Menginput Melebihi Limit Bilangan\n");
    }
    return 0;
}