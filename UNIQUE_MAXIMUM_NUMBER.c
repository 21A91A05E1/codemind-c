#include<stdio.h>
int main()
{
    int i,n,arr[100],j,max=0,c=0,c1=0;
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
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                c1++;
            }
        }
    }
    if(c1==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
    
}