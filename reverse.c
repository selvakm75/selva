#include <stdio.h>
void main()
{
int n, temp, s, r = 0;
printf("Enter an integer \n");
scanf("%d", &n);
temp = n;
while (n > 0)
{
s = n % 10;
r = r * 10 + s;
n /= 10;
}
printf("Given number is = %d\n");
printf("Its reverse is  = %d\n");
if (temp == r)
printf("Number is a palindrome");
else
printf("Number is not a palindrome");
}
