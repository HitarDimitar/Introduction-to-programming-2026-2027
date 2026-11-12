#include <stdio.h>

int main() {
    unsigned int n, i, j;

    if (scanf_s("%u %u %u", &n, &i, &j) != 3 || i >= 32 || j >= 32) {
        return 1;
    }

    unsigned int bitI = (n >> i) & 1u;
    unsigned int bitJ = (n >> j) & 1u;

    if (bitI != bitJ) {
        n ^= (1u << i) | (1u << j);
    }

    printf("%u\n", n);

    return 0;
}
