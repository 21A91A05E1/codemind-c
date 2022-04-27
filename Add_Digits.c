#include<stdio.h>
int main()
{
    int n,sum=0,d;
    scanf("%d",&n);
    while(n/10!=0)
    {
        sum=0;
        while(n!=0)
        {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        n=sum;
    }
    printf("%d",sum);
}