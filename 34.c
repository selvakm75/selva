#include<stdio.h>
void main()
{
int countnumber=0;
char str[50];
printf("Enter the string\n");
gets(str);
for(i=0;i<str[i]>'0'&&str[i]<'9';i++)
{
countnumber++;
}
printf("The number of characters are %d",countnumber+1);
}
