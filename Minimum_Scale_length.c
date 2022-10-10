#include<stdio.h>
int main()
{
    int n,arr[100],i,j,res=0,min=100;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    for(i=min;i>=1;i--)
    {
        res=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            {
                res+=1;
            }
        }
        if(res==n)
        {
            printf("%d",i);
            break;
        }
        
    }
}