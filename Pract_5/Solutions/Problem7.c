#include <stdio.h>

long long gcd(long long x, long long y)
{
    if (x < 0) x = -x;
    if (y < 0) y = -y;
    while (y != 0) {
        long long t = x % y;
        x = y;
        y = t;
    }
    return x;
}

int main() {
    long long num = 0, den = 1; 
    long long a, b;

    while (scanf_s("%lld", &a) == 1 && a != 0) {
        if (scanf_s("%lld", &b) != 1) {
            break;
        }
        if (b < 0) { 
            a = -a;
            b = -b;
        }

        num = num * b + a * den;
        den = den * b;

        long long g = gcd(num, den);
        if (g != 0) {
            num /= g;
            den /= g;
        }
    }

    int negative = num < 0;
    long long absNum = negative ? -num : num;
    long long whole = absNum / den;
    long long rem = absNum % den;

    if (rem == 0) {
        printf("%s%lld\n", (negative && whole != 0) ? "-" : "", whole);
    } else if (whole == 0) {
        printf("%s%lld/%lld\n", negative ? "-" : "", rem, den);
    } else {
        printf("%s%lld %lld/%lld\n", negative ? "-" : "", whole, rem, den);
    }

    return 0;
}
