#include <stdio.h>
int main() {
	int mass , acc , force ;
	printf("enetr mass= ");
	scanf("%d",&mass);
	
	printf("enter acceleration=");
	scanf("%d",&acc);
	
	force=mass*acc;
	
	
	printf("force= %d\n", force);
	return 0;
}
