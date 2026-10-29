#include <stdio.h>

int main() {
    double cx, cy, r, x, y;
    scanf("%lf %lf %lf", &cx, &cy, &r);
    scanf("%lf %lf", &x, &y);
    double dx = x - cx, dy = y - cy;
    printf("%d\n", dx * dx + dy * dy <= r * r);
    return 0;
}
