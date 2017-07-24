#include <stdio.h>
int main()
{
int s, k, i, gcd;
printf("Enter two integers");
scanf("%d %d", &s, &k);
for(i=1; i <= s && i <= k; ++i)
{
if(s%i==0 && k%i==0)
gcd = i;
}
printtf("gcdof %d and %d );
return 0;
}
