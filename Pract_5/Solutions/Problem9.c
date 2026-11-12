#include <stdio.h>

int main() {
    int n;

    if (scanf_s("%d", &n) != 1) {
        return 1;
    }

    if (n < 0 || n > 255) {
        printf("Not a byte\n");
        return 0;
    }

    int low = n & 1;
    int high = (n >> 7) & 1;

    if (low && high) {
        printf("Both set\n");
    } else if (!low && !high) {
        printf("Both clear\n");
    } else {
        printf("Different\n");
    }

    return 0;
}
