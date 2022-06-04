#include<stdio.h>
int main()
{
    int i,n,arr[100],dc=0,c=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        while(arr[i])
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            dc++;
        }
        if(dc%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}