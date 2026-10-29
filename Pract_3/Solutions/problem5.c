#include <stdio.h>
#include <math.h>

int main() {
    double cx, cy, d, x, y;
    scanf("%lf %lf %lf", &cx, &cy, &d);
    scanf("%lf %lf", &x, &y);
    printf("%d\n", fabs(x - cx) + fabs(y - cy) <= d);
    return 0;
}
