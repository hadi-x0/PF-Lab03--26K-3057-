#include <stdio.h>
int main(){
	int a,b;
	printf("Enter Temperature of Machine:\n");
	scanf("%d", &a);
	printf("Enter Pressure of Machine:\n");
	scanf("%d", &b);
	if (a>100 || b>250) printf("Shut down");
	else if ((a>=85 & a<=100) || (b>=200 & b<=250))printf("Warning Mode");
	else printf("Status is Good");
	return 0;
}
