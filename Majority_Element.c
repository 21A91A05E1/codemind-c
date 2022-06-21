#include<stdio.h>
int main()
{
    int arr[100],n,max,maxelement,c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=0;
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
        if(c>max)
        {
            max=c;
            maxelement=arr[i];
        }
    }
    printf("%d",maxelement);
}