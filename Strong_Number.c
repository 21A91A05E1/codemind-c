#include<stdio.h>
int main()
{
    int i,sum=0,fact=1,n,temp,d;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        for(i=1;i<=d;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;
        n=n/10;
    }
    n=temp;
    if(sum==n)
    printf("The number %d is a strong number",n);
    else
    printf("The number %d is not a strong number",n);
    
}