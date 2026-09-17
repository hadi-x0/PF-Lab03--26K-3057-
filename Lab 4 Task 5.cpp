#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter your Order Ammount: \n");
	scanf("%d", &a);
	printf("Enter your Membership Status: (Enter 1 for yes or 0 for No)\n");
	scanf("%d", &b);
	printf("Enter your City status: (Enter 1 for insider or 0 for outsider)\n");
	scanf("%d", &c);
	if (a>3000 || b==1) printf("Your dilivery is free\n");
	else printf("Your delivery is not free\n");
	if(a<50000 & c==1) printf("COD is available for you\n");
	else printf("COD is not vailable for you\n");
	return 0;
	}
