#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(1<=a&&b<=10000)
    {
      c=a*b;
      printf("%d",c);
    }
    return 0;
}