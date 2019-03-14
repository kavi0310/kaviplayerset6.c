#include<stdio.h>
int main()
{
    char a[1000],b[100];
    int i,l=0,j,c=0,m=0,k;
    scanf("%[^\n]",&a);
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    //printf("l=%d\n",l);
    for(j=0;b[j]!='\0';j++)
    {
        c++;
    }
    //printf("c=%d\n",c);
    for(j=0;j<c;j++)
    {
      for(i=0;i<l;i++)
      {
          if(a[i]==b[j])
          m++;
      }
    }
    //printf("m=%d\n",m);
    m=m/2;
    k=m/c;
    printf("%d",k);
}
