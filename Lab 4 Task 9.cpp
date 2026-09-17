#include <stdio.h>

int main() {
    int a, b;

    printf("Enter number of people: ");
    scanf("%d", &a);
    printf("Enter total weight (kg): ");
    scanf("%d", &b);
    if (a > 10 && b > 1000) {
    printf("Entry denied: Exceeds both weight limit and people limit.\n");
    } else if (a > 10) {
    printf("Entry denied: Exceeds people limit.\n");
    } else if (b > 1000) {
    printf("Entry denied: Exceeds weight limit.\n");
    } else {
    printf("Elevator operating normally.\n");
    }
    return 0;
}
