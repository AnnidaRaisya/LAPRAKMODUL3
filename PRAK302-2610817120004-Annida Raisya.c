#include <stdio.h>

int main() {
    int nilai;
    for (int i = 0; i < 5; i++) {
        printf("Input: ");
        scanf("%d", &nilai);

        if (nilai >= 80) printf("Output: A\n");
        else if (nilai >= 70) printf("Output: B\n");
        else if (nilai >= 60) printf("Output: C\n");
        else if (nilai >= 50) printf("Output: D\n");
        else printf("Output: E\n");
    }
    return 0;
}