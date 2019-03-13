#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b;
int i;
clrscr();
scanf("%c %s",&b,&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b)
{
printf("%d",i+1);
break;
}
}
getch();
}
