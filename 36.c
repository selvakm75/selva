#include
int main()
{
int a, b, t;
scanf("%d %d",&a,&b);
printf("Be fore swapping a=%d, b=%d \n", a, b);
t = a;
a = b;
b = t;
printf("Af ter swapping a=%d, b=%d", a, b);
return 0;
}
