#include <stdio.h>

int main() {
    int n;
    for (int i = 0; i < 3; i++) {
        printf("Input: ");
        scanf("%d", &n);

        if (n > 0) printf("Output: positif\n");
        else if (n < 0) printf("Output: negatif\n");
        else printf("Output: nol\n");
    }
    return 0;
}