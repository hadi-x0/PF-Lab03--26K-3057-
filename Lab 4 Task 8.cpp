#include <stdio.h>

int main() {
    float a;
    int b;

    printf("Enter CGPA: ");
    scanf("%f", &a);
    printf("Enter monthly family income: ");
    scanf("%d", &b);
    if (a > 3.7 & b < 50000) {
    printf("Full Scholarship\n");
    } else if (a > 3.3 && b < 100000) {
    printf("Half Scholarship\n");
    } else {
    printf("No Scholarship\n");
    }
    return 0;
}
