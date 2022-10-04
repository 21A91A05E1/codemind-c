#include<stdio.h>
int main()
{
    int t,a,i,fact=1,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        fact=1;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
    }
}