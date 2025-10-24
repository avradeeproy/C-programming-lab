#include <stdio.h>
int main() {
	int mass , velo , kin_en;
	
	printf("enter the mass=");
	scanf("%d",&mass);
	
	printf("enter the velocity=");
	scanf("%d",&velo);
	
	kin_en= mass*velo*velo/2;
	
	printf("kinetic energy is %d\n",kin_en);
	
	return 0;
	
}
