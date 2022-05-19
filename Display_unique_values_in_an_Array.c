#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                break;
            }
        }
        if(j==n)
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}