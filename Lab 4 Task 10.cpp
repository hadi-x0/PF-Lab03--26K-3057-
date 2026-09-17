#include <stdio.h>

int main() {
    int a, b, c = 0;

    printf("Enter zone type (1 for School, 2 for Highway, 3 for Residential): ");
    scanf("%d", &a);

    printf("Enter driver's speed : ");
    scanf("%d", &b);

    switch(a) {
case 1:
    if (b > 50) {
    c = 2000;
    } else if (b > 30) {
    c = 1000;
    }
    break;

    case 2:
    if (b > 120) {
    c = 2000;
    } else if (b > 100) {
    c = 1000;
    }
    break;
    case 3:
    if (b > 70) {
    c = 2000;
    } else if (b > 50) {
    c = 1000;
    }
    break;
    default:
    printf("Invalid zone type!\n");
    return 0;
    }

    if (c > 0) {
    printf("Fine amount is %d\n", c);
    } else {
    printf("No fine Speed is within the limit.\n");
    }

    return 0;
}
