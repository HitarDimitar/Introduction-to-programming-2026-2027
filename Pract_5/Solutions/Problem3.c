#include <stdio.h>

int main() {

    int hour;
    scanf_s("%d",&hour);

    if (hour < 0 || hour > 23) {
        printf("Invalid hour\n");
    } else if (hour <= 5) {
        printf("Night\n");
    } else if (hour <= 11) {
        printf("Morning\n");
    } else if (hour <= 17) {
        printf("Afternoon\n");
    } else {
        printf("Evening\n");
    }

    return 0;
}
