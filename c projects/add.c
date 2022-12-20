#include<stdio.h>
#include<conio.h>

void main()
{
	int sub1,sub2,sub3,total,avg;
	
	printf("Enter sub1 and sub2 and sub3");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	
	total=sub1+sub2+sub3;
	
	printf("\nTotal marks =%d",total);
	
	avg=total/3;
	printf("\nAvg=%d",avg);
	printf("\n Finish");
	
}
