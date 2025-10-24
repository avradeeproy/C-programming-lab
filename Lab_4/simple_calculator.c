#include <stdio.h>
int main(){
	int n1, n2, op, sum, sub, mul, div;
	printf("enter the first number=");
	scanf("%d",&n1);
	
	printf("enter the second number=");
	scanf("%d",&n2);
	
	printf("operators \n");
	printf("1 is for addition \n");
	printf("2 is for subtraction \n");
	printf("3 is for multiplication\n");
	printf("4 is for division\n");
	
	printf("enter number for operator=");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			sum=n1+n2;
			printf("sum of the numbers is %d",sum);
			break;
		case 2:
			sub=n1-n2;
			printf("subtraction of the numbers is %d",sub);
			break;
		case 3:
			mul=n1*n2;
			printf("product of the numbers is %d",mul);
			break;
		case 4:
			div=n1/n2;
			printf("quotient of the numbers is %d",div);
			break;
		default:
			printf("invalid input");
		
	}
	
	return 0;
}
