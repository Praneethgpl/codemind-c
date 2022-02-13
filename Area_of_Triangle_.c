#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    scanf("%f%f%f",&a,&b,&c);
    if(1<=a<=1000&&a<=b<=1000&&b<=c<=1000)
    {
      s=(a+b+c)/2;
      area=sqrt((s*(s-a)*(s-b)*(s-c)));
       printf("%.2f",area);
    }
    return 0;
}