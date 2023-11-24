#include<stdio.h>
int main() 
    {
    int a[100000], n, i, j, temp,mth,nth,mthmin,nthmax;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++) 
	{
     scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) 
		{
            if (a[i]>a[j]) 
			{
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Enter the value of m:\t");
    scanf("%d",&mth);
    printf("Enter the value of nth:\t");
    scanf("%d",&nth);
    mthmin=a[mth-1];
    nthmax=a[n-nth];
    printf("%dth minimum element is %d\n",mth,mthmin);
    printf("%dth maximum element is %d\n",nth,nthmax);
    printf("Sum %d\n",mthmin+nthmax);
    printf("Diff %d\n",mthmin-nthmax);
}
