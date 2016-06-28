#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,j=0,temp;
printf("\n enter the string");
gets(str);
i=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("\n reverse of string is %s",str);
return 0;
}
