#include<stdio.h>
#include<math.h>
int main()
{
    int number=0,d=0,digit=0,i=1,add;
    scanf("%d",&number);
    int temp=number;
    while(temp!=0)
    {
       d=temp%10;
       temp=temp/10;
       digit++;
       if(d==6)
       {
         i=digit;
       }
    }
    if(i==1)
    {
        if(number%10==9)
        {
            printf("%d",number);
        }
        else
        {
        printf("%d",number+3);
        }
    }
    else
    {
        add=pow(10,i-1);
        add=add*3;
      printf("%d",number+add);  
    }
    return 0;
}