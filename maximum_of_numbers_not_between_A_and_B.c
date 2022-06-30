#include<stdio.h>
int main()
{
    int i,n,arr[100],max=0,c=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                c++;
            }
        }
    }
    if(c>0)
    printf("%d",max);
    else
    printf("-1");
}