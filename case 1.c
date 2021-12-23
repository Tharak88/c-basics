#include <stdio.h>
void main()
{
	int a,b,sum,diff,pro,quo,rem;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	pro=a*b;
	diff=a-b;
	quo=a/b;
	rem=a%b;
	printf("\nsum of a,b is %d",sum);
	printf("\ndiff of a,b is %d",diff);
	printf("\npro of a,b id %d",pro);
	printf("\nquo of a,b is %d",quo);
	printf("\nrem of a,b is %d",rem);
}
