#include <stdio.h>
void main ()
{
	int  minutes,hour,time;
	printf("enter the time");
	scanf("%d%d",&time,&hour);
    time=(hour*60)+minutes;
	printf(" given time%d in hour%d is %d",minutes,hour,time);	
}

