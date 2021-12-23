#include <stdio.h>
 void main()
 {
 	int amnt,total;
 	printf("enter amnt");
 	scanf("%d",&amnt);
 	total=amnt/2000;
 	printf("2000 notes is %d",total);
 	amnt=amnt%2000;
 	total=amnt/500;
 	printf("\n 500 notes is %d",total);
 	amnt=amnt%500;
 	total=amnt/200;
 	amnt=amnt%200;
 	printf("\n 200 notes is %d",total);
 	total=amnt/100;
 	amnt=amnt%100;
 	printf("\n 100 notes is %d",total);
 	total=amnt/50;
 	amnt=amnt%50;
 	printf("\n 50 notes is %d",total);
 	total=amnt/20;
 	amnt=amnt%20;
 	printf("\n 20 notes is %d",total);
 	total=amnt/10;
 	amnt=amnt%10;
 	printf("\n 10 notes is %d",total);
 	total=amnt/5;
 	amnt=amnt%5;
 	printf("\n 5 notes is %d",total);
 	total=amnt/2;
 	amnt=amnt%2;
 	printf("\n 2 notes is %d",total);
 	total=amnt/1;
 	amnt=amnt%1;
 	printf("\n 1 notes is %d",total);
}
