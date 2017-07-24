#include<stdio.h>
int main()
{
char string[MAX_SIZE];
int alphabets, numbers,character, i;
alphabets = numbers = character = i = 0;
printf("Enter any string : ");
gets(string);
while(string[i]!='\0')
{
if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
{
alphabets++;
}
else if(string[i]>='0' && string[i]<='9')
{
numbers++;
}
else
{
character++;
}
i++;
}
printf("alphabets = %d\n");
printf("numbers = %d\n");
printf(" characters = %d\n");
return 0;
}
