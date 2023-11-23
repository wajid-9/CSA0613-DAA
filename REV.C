#include<stdio.h>
int main()
{int n,r=0,a;
printf("Enter the number to be reversed");
scanf("%d",&n);
while(n!=0)
    { 
    a=n%10;
    r=r*10+a;
    n/=10;
    }
    printf("%d is the reverse",r);
}
