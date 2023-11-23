#include<stdio.h>
int main()
{
	int n,originalnum,sum=0,r;
	printf("enter an num:");
	scanf("%d",&n);
	originalnum=n;
	while(originalnum!=0)
	{
		r=originalnum%10;
		sum=sum+(r*r*r);
		originalnum=originalnum/10;
	}
	if(sum==n)
	printf("%d is armstrong",n);
	else
	printf("%d is not armstrong",n);
	return 0;
}
