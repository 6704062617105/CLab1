#include<stdio.h>
int main(){
	int num1,num2;
	printf("num1 = ");
	scanf("%d",&num1);
	printf("num2 = ");
	scanf("%d",&num1);
	
	if(num1 > num2) 
		printf("num1 id greater than num2 = %d",num1-num2);
	else
		printf("num2 is greater than num1 = %d",num2-num1);
	
}
