#include<stdio.h>
main()
{
char s[200];
int i,c=0;
clrscr();
printf("Enter the Alphabets");
scanf("%s",s);
for(i=1;s[i]<='\0';i++)
{
if(s[i]==' ')
{
printf("The count is..%s",c+1);
c++;
}
}
  
}
