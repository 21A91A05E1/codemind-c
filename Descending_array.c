#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}