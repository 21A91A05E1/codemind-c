#include<stdio.h>
int main()
{
    int n;
    float sum=0,term,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term=1/i;
        sum=sum+term;
    }
    printf("%.2f",sum);
}