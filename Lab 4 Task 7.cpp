#include <stdio.h>

int main() {
int a, b, c = 0;
printf("Enter plan choice (1-4): ");
scanf("%d", &a);

switch(a) {
case 1:
printf("Enter minutes used: ");
scanf("%d", &b);
c = 500;
if (b > 1000) {
c += (b - 1000) * 2;
}
printf("Total bill: %d\n", c);
break;
case 2:
printf("Enter minutes used: ");
scanf("%d", &b);
c = 800;
if (b > 2000) {
c += (b - 2000) * 2; }
printf("Total bill: %d\n", c);
break;
case 3:
c = 1200;
printf("Total bill: %d\n", c);
break;
case 4:
printf("Enter minutes used: ");
scanf("%d", &b);
c = b * 1;
printf("Total bill: %d\n", c);
break;
default:
printf("Invalid choice!\n");
break; }

    return 0;
}
