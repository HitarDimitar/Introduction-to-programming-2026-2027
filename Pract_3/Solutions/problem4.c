#include <stdio.h>
#include <math.h>

int main() {
    double cx, cy, a, x, y;
    scanf("%lf %lf %lf", &cx, &cy, &a);
    scanf("%lf %lf", &x, &y);
    printf("%d\n", fabs(x - cx) <= a / 2 && fabs(y - cy) <= a / 2);
    return 0;
}
