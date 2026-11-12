#include <stdio.h>

int main() {
  
    int n;

    if (scanf_s("%d", &n) != 1 || n < 0 || n > 9999) {
        return 1;
    }

    int maxDigit = 0;
    int minDigit = 9;

    do {
        int d = n % 10;
        if (d > maxDigit) maxDigit = d;
        if (d < minDigit) minDigit = d;
        n /= 10;
    } while (n > 0);

    printf("%d\n", maxDigit - minDigit);

    return 0;
}
