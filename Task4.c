#include<stdio.h>
int main(){
	int amount,limit;
	limit=5000;
	printf("Enter the amount you would like to withdraw: ");
	scanf("%d",&amount);
	if(amount<=limit && amount%20==0){
		printf("withdrawal approved");
	}
	else{
	   printf("withdrawal denied");		
	}
	return 0;
	
}
