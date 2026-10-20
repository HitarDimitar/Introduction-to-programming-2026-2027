#include <stdio.h>
#include <math.h>

int main() {
    int a = 3;
    int b = 2;

    int sum = a + b;
    int diff = a - b;

    int result = pow(sum,4) - diff * diff;

    printf("(a + b)^4 - (a - b)^2 = %d\n", result);
    return 0;
}