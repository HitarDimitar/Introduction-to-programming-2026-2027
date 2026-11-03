#include <stdio.h>

int main() {
    unsigned int N, k;
    scanf("%u %u", &N, &k);

    N = N | (1 << k);

    printf("%u", N);

    return 0;
}