#include <stdio.h>
int main() {
    int num1, num2, gcd, lcm, count = 1, small;
    printf("Enter 2 integer numbers\n");
    scanf("%d%d", &num1, &num2);
    if (num1 < num2) {
        small = num1;
    } else {
        small = num2;
    }
    while (count <= small) {
        if (num1 % count == 0 && num2 % count == 0) {
            gcd = count;
        }
        count++;
    }
    lcm = (num1 * num2) / gcd;
    printf("GCD = %d\nLCM = %d\n", gcd, lcm);
}

