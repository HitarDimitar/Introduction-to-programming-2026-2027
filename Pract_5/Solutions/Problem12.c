#include <stdio.h>

int main() {
    int mode;

    if (scanf_s("%d", &mode) != 1) {
        return 1;
    }

    if (mode < 0 || mode > 7) {
        printf("Invalid mode\n");
    } else {
        if (mode & 4) {
            putchar('r');
        } else {
            putchar('-');
        }

        if (mode & 2) {
            putchar('w');
        } else {
            putchar('-');
        }

        if (mode & 1) {
            putchar('x');
        } else {
            putchar('-');
        }

        putchar('\n');
    }

    return 0;
}
