#include <stdio.h>
void main()
{
	int l,b,area,peri;
	printf("enter l and b");
	scanf("%d%d",&l,&b);
	area=l*b;
	peri=2*(l+b);
	printf("\nperi of rectangle is %d",peri);
	printf("\narea of rectangle is %d",area);
}
