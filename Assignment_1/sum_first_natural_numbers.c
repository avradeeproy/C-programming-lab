#include <stdio.h>
int main(){
	int num, sum, sum1;
	printf("enter the number= ");
	scanf("%d",&num);
	
	sum=(num)*(num+1);
	sum1=sum/2;
	printf("the sum of the first %d",num);
	printf(" numbers is= %d",sum1);
	
	return 0;
}
