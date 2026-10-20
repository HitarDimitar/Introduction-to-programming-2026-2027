#include <stdio.h>
#include <math.h>

int main_8() {
	const double eps = 1e-9;
	double x, y, r, xp, yp;

	scanf_s("%lf %lf %lf %lf %lf", &x, &y, &r, &xp, &yp);

	double distance = sqrt(pow(xp - x, 2) + pow(yp - y, 2));

	printf("%d ", distance < r - eps);
	printf("%d ", fabs(distance - r) < eps);
	printf("%d\n", distance > r + eps);

	return 0;
}