#include<stdio.h>
int main()
{
char str[50];
int csc;
int c;
csc=0;
printf("Enter the string");
get(str);
for(c=0;str[c]!=NULL;c++)
{
csc++;
}
printf("\n Sc s%d",csc");
return 0;
}
