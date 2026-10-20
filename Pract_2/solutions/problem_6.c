#include <stdio.h>
#include <math.h>

int main() {
	int h1, m1, h2, m2;
	printf("Enter the interval\n");
	scanf_s("%d %d %d %d", &h1, &m1, &h2, &m2);

	int t1 = 60 * h1 + m1;
	int t2 = 60 * h2 + m2;

	int res = ((t2 - t1) % 1440 + 1440) % 1440;
	printf("The time between %d:%d and %d:%d : %d\n", h1, m1, h2, m2, res);

	return 0;
}