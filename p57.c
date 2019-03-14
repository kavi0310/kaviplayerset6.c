#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b;
int i,c=0;
clrscr();
scanf("%s %c",&a,&b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b)
c++;
}
printf("%d",c);
getch();
}
