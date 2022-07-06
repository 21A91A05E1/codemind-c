#include<stdio.h>
int main()
{
    int i,arr[100],n,c=0,c1=0,j;
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
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(arr[i]==c)
        {
            c1++;
            arr[i]=-1;
        }
    }
    printf("%d",c1);
}