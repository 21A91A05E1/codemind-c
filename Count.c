#include<stdio.h>
int main()
{
    int i,n,arr[100],ec=0,oc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ec++;
        }
        if(arr[i]%2!=0)
        {
            oc++;
        }
    }
    printf("%d %d",ec,oc);
}