#include <stdio.h>
int binarySearch( int l,int key,int h,int a[] )
{int m;
while(l<=h)
	{
	m=(l+h)/2;
		if(a[m]<key)
		{l=m-1;
		}
		if(a[m]>key)
		{
			h=m+1;
		}if(a[m]==key)
		{return m;
		}
	}return -1;
}int main()
{   int key,n;
	int a[]={-4,-2,1,4,5,7,12,13,15,18,20,23,29};
	key=4;
	n=sizeof(a)/sizeof(a[0]);
	int res = binarySearch(0,key,n-1,a);
	if(res!=-1)
	{
		printf("%d is found ",key,res);
		}else
		{
			printf("%d is not found",key);
		}
}
