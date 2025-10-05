#include<stdio.h>
int main(){
	int a,b;
	printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
	(a>b)? printf ("a is greater than b.") : printf("b is greater than a.");
	
	return 0;
}
