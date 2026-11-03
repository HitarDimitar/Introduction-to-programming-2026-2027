#include <stdio.h>

int main() {
    unsigned int N;
    scanf("%u", &N);

    N = N ^ 31;

    printf("%u", N);

    return 0;
}