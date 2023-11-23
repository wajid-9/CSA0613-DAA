#include<stdio.h>
int main()
{
	int a[10],n,position,i,val;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position to enter the new element\n");
	scanf("%d",&position);
	printf("Enter the value\n");
	scanf("%d",&val);
	for(i=n-1;i>=position-1;i--)
	{
		a[i+1]=a[i];
	}
		a[position-1]=val;
	printf("Resultant array\n");
	for(i=0;i<=n;i++)
	{
		printf("%d,",a[i]);
	}
}
