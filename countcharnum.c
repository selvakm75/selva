#include<stdio.h>
int main()
{
char string[MAX_SIZE];
int character, i;
character = i = 0;
printf("Enter any string : ");
gets(string);
while(string[i]!='\0')
{
character++;
}
i++;
printf(" characters = %d\n");
return 0;
}
