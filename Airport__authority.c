#include<stdio.h>
int main()
{
    int t,n,arr[100],i,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for(i=0;i<t;i++)
    {
        if(arr[i]<=n)
        {
            c++;
        }
        else
        {
            c+=2;
        }
    }
    printf("%d",c);
}