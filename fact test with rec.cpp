#include<stdio.h>
int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{    int n,result;
     printf("ENter the number");
     scanf("%d",&n);
	result=fact(n);
	printf("The factorial of the %d is %d",n,result);
	return 0;
}
