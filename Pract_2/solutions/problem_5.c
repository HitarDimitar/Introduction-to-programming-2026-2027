#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int positive = (a > 0) + (b > 0) + (c > 0);
    int negative = (a < 0) + (b < 0) + (c < 0);

    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}