#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int a, b;

    scanf("%u %u", &a, &b);

    srand((unsigned int)time(NULL));

    int point = 1 + rand() % 7;

    printf("%d\n", point);

    unsigned int leftSide = (1u << point) - 1;
    unsigned int rightSide = 0xFFu ^ leftSide;

    unsigned int a1 = (b & leftSide) | (a & rightSide);
    unsigned int b1 = (a & leftSide) | (b & rightSide);

    printf("%X\n", a1);
    printf("%X\n", b1);

    return 0;
}