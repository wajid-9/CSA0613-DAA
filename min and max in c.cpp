#include<stdio.h>
int main()
{
	int a[100000],n,i,j,temp;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("min = %d\n",a[0]);
	printf("max = %d",a[n-1]);
}
