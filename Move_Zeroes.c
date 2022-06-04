#include<stdio.h>
int main()
{
    int i,n,arr[100],min=0,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j++]=arr[i];
        }
    }
    for(i=j;i<n;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}