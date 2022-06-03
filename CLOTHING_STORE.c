#include<stdio.h>
int main()
{
    int i,n,arr[100],sum=0,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        sum=sum+c%2;
    }
    printf("%d",sum);
}