#include <stdio.h>
int gcd(int s, int k)
{
if (s == 0 || k == 0)
return 0;
if (s == k)
return a;
if (s > k)
return gcd(s-k,k);
return gcd(s,s-k);
}
int main()
{
int s= 98, k= 56;
printf("GCD of %d and %d is %d ");
return 0;
}
