#include<stdio.h>
int main()
{
  float n,m,a;
  scanf("%f%f",&n,&m);
   if(1<=n&&m<=1000)
   {
      a=((n+m)/2);
      printf("%.4f",a);
   }
   return 0;
}