int main()
{
    short a1;
    int a2;
    long a3;
    long long a4;

    unsigned short b1;
    unsigned int b2;
    unsigned long b3;
    unsigned long long b4;

    float r1;
    double r2;
    long double r3;

    char c1;

    scanf_s("%hd %d %ld %lld", &a1, &a2, &a3, &a4);
    scanf_s("%hu %u %lu %llu", &a1, &a2, &a3, &a4);
    scanf_s("%f %lf %Lf", &r1, &r2, &r3);
    scanf_s("%c", &c1);

    printf("Printing: \n"
        "%hd %d %ld %lld\n"
        "%hu %u %lu %llu\n"
        "%f %lf %Lf\n"
        "%c\n", a1, a2, a3, a4, b1, b2, b3, b4, r1, r2, r3, c1);

    return 0;
}