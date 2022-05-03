#include<stdio.h>
int main()
{
    int a[100],b[100],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=a[i]+b[i];
        printf("%d
",sum);
    }
}