#include <stdio.h>

int main() {
    unsigned int n, k;
    char c;

    if (scanf_s("%u %u %c", &n, &k, &c, 1) != 3 || k >= 32) {
        return 1;
    }

    if (c != 'L' && c != 'H') {
        return 0;
    }

    unsigned int mask = (1u << k) - 1; 

    if (c == 'L') {
        printf("%u\n", n & mask);
    } else {
        printf("%u\n", n & ~mask);
    }

    return 0;
}
