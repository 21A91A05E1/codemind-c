#include<stdio.h>
int main()
{
    int i,a[100],b[100],c[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}