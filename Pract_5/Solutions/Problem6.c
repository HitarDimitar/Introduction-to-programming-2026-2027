#include <stdio.h>

int main() {
    unsigned int a, b;
    char op;

    if (scanf_s("%u %u %c", &a, &b, &op, 1) != 3) {
        return 1;
    }

    if (op != '&' && op != '|' && op != '^' && op != '<' && op != '>') {
        return 0; 
    }

    if ((op == '<' || op == '>') && b >= 32) {
        printf("Invalid shift\n");
        return 0;
    }

    if (op == '&') {
        printf("%u\n", a & b);
    } else if (op == '|') {
        printf("%u\n", a | b);
    } else if (op == '^') {
        printf("%u\n", a ^ b);
    } else if (op == '<') {
        printf("%u\n", a << b);
    } else {
        printf("%u\n", a >> b);
    }

    return 0;
}
