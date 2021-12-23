#include <stdio.h>
void main()
{
	int min,hours;
	printf("enter min");
	scanf("%d",&min);
	hours=min/60;
	min=min%60;
	printf("\nhours is %d",hours);
	printf("\nmin is %d",min);
	
	
}
