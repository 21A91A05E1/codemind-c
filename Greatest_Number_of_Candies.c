#include<stdio.h>
int main()
{
    int n,arr[100],ca,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ca);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+ca<max)
        {
            printf("False ");
        }
        else
        {
            printf("True ");
        }
    }
}