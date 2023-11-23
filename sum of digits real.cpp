#include<stdio.h>
int main()
{
	int a,r=0,n;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		r=a+r;
		n=n/10;
	}
	printf("sum of the digits is %d",r);
}
