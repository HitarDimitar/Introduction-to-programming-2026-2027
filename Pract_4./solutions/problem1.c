#include <stdio.h>

int main() {
    unsigned int N, k;
    scanf("%u %u", &N, &k);

    printf("%u", (N >> k) & 1);

    return 0;
}