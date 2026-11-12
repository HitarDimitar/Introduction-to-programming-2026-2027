#include <stdio.h>

int main() {
    unsigned int n, k;

    if (scanf_s("%u %u", &n, &k) != 2) {
        return 1;
    }

    if (k >= 32) {
        printf("Invalid position\n");
    } else if ((n >> k) & 1u) {
        printf("Bit %u is 1\n", k);
    } else {
        printf("Bit %u is 0\n", k);
    }

    return 0;
}
