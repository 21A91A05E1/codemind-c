#include<stdio.h>
int main()
{
    int i,n,arr[100],j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j] && i!=j)
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}