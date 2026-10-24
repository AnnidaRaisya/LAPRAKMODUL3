#include <stdio.h>

int main() {
    for (int t = 0; t < 3; t++) {
        int arr[10];
        int count = 0;
        char ch;

        printf("Input: ");
        while (scanf("%d%c", &arr[count], &ch) == 2) {
            count++;
            if (ch == '\n' || ch == '\r') break;
        }

        for (int i = 0; i < count - 1; i++) {
            for (int j = i + 1; j < count; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("Output: ");
        for (int i = 0; i < count; i++) {
            printf("%d%c", arr[i], (i == count - 1) ? '\n' : ' ');
        }
    }
    return 0;
}