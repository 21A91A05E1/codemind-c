#include<stdio.h>
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    if(n%2!=0)
    {
        printf("0");
    }
}