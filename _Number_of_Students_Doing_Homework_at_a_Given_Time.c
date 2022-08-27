#include<stdio.h>
int main()
{
    int m,n,arr[100],arr1[100],k,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k && arr1[i]>=k)
        {
            c++;
        }
    }
    printf("%d",c);
}