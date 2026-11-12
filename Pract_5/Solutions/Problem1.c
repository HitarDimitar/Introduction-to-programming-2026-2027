#include <stdio.h>

int main() {
    double a,b;
    char op;

    scanf_s("%g %g %c", &a, &b, &c);
  
    if (op == '+') {
        printf("%g\n", a + b);
    } else if (op == '-') {
        printf("%g\n", a - b);
    } else if (op == '*') {
        printf("%g\n", a * b);
    } else if (op == '/') {
        if (b == 0) {
            printf("Error: division by zero\n");
        } else {
            printf("%g\n", a / b);
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
