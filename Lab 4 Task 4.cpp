#include <stdio.h>
int main (){
	int a,b;
	float c;
	printf("Have you passed Programming Fundamental? (Enter 1 for yes or 0 For No:)\n");
	scanf("%d", &a);
	printf("Enter your grade point:\n");
	scanf("%f", &c);
	printf("Enter your completed cedit hours:\n");
	scanf("%d", &b);
	if (a==1 & c>=2.5 & b>=30)
	printf("You can register for the course");
	else 
	printf("You can not register for course");
	return 0;
}
