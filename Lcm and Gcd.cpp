#include <stdio.h>
int main() {
    int n1, n2, gcd, lcm, i , s;
    printf("Enter 2 integer numbers\n");
    scanf("%d%d", &n1, &n2);
    if (n1 < n2) {
        s = n1;
    } else {
        s= n2;
    }
    for (i=1;i <= s;i++) 
	{
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }}
    lcm = (n1 * n2) / gcd;
    printf("GCD = %d\nLCM = %d\n", gcd, lcm);
}

