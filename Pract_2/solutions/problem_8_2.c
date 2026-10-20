#include <stdio.h>
#include <math.h>

int main() {
	const double abx = -5 - (-4);
	const double aby = 5 - (-1);
	const double ab = abx * abx + aby * aby;

	const double acx = 2 - (-4);
	const double acy = 0 - (-1);
	const double ac = acx * acx + acy * acy;

	double px, py;
	scanf_s("%lf %lf", &px, &py);

	double apx = px - (-4);
	double apy = py - (-1);
	double AP = apx * apx + apy * apy;
	int in_big = (AP) < ab;

	double cross_ab_ap = abx * apy - aby * apx;
	double cross_ap_ac = apx * acy - apy * acx;

	double cross_ab_ac = abx * acy - aby * acx;

	int in_between = cross_ab_ac > 0 && cross_ab_ap > 0 && cross_ap_ac > 0 ||
		cross_ab_ac < 0 && cross_ab_ap < 0 && cross_ap_ac < 0;

	const double circle_x = -3, circle_y = -5;
	const double radius = 1;

	int is_out_of_circle = (px - circle_x) * (px - circle_x) + (py - circle_y) * (py - circle_y) > radius * radius;

	printf("Inside: %d\n", in_big && is_out_of_circle && !in_between);
	return 0;
}