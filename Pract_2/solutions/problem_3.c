#include <stdio.h>

int main()
{
    unsigned int x, y;
    printf("Enter two integers:\n");
    scanf_s("%d %d", &x, &y);

    printf("x = %d, y = %d\n", x, y);
    unsigned temp = x;
    x = y;
    y = temp;
    printf("x = %d, y = %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;
    printf("x = %d, y = %d\n", x, y);

    return 0;
}