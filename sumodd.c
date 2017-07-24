#include <stdio.h>
int main()
{
int s=0,k=0,i;
for(i=1;i<=15;i++)
s += i;
for(i=15;i<=45;i++)
k = i%2 == 0?k:k+i;
scanf("%d",&s);
scanf("%d",&k)
return 0;
}
