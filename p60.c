#include<stdio.h>

int main() {
    char a[100],b[100];
    int i,l=0,j;
    scanf("%s %s",&a,&b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
        if(a[i]==b[j])
        {
        l++;
        }
        }
    }
    if(l>=1)
    printf("yes");
    else
    printf("no");
   }
