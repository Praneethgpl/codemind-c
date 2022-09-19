#include<stdio.h>
int main()
{
    int noOfNumbers,i=0,j=0,count=0;
    scanf("%d",&noOfNumbers);
    int numbers[noOfNumbers];
    for(i=0;i<noOfNumbers;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<noOfNumbers;i++)
    {
        for(j=0;j<noOfNumbers;j++)
        {
           if(numbers[i]==numbers[j])
           {
               count++;
           }
        }
        if(count==1)
        {
            printf("%d",numbers[i]);
        }
        count=0;
    }
    return 0;
}