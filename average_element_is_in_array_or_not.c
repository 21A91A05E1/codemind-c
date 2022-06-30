#include<stdio.h>
int main()
{
    int i,n,arr[100],avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=sum/n;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}