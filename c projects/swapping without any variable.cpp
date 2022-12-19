#include<stdio.h>
main()
{
	int a,b;
	printf("\n enter a and b");
	scanf("%d%d",&a,&b);
	
	printf("\n before swapping a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n before swapping a=%d and b=%d",a,b);
}
