#include<stdio.h>
int main()
{
    int i,arr[100],n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            sum=sum+arr[i];
        }
        if(arr[i]%2==0)
        {
            break;
        }
    }
    printf("%d",sum);
}