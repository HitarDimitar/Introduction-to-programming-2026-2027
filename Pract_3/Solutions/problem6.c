#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%f %f", &x, &y);

    int inHalfCircle = y >= 0 && x * x + y * y <= 16;
    int outsideRhombus = fabs(x) + fabs(y) >= 2;  
    int inSquare = x >= 0 && x <= 4 && y <= 0 && y >= -4;
    printf("%d\n", (inHalfCircle && outsideRhombus) || inSquare);
    
    return 0;
}
