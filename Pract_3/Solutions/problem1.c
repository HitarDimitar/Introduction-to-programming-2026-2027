#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2f\n", fabs(a - b));
    return 0;
}
