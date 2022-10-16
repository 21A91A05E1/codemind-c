#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,arr[100],sum=0,i,total;
        scanf("%d",&n);
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
        total=(n*(n+1))/2;
        printf("%d
",total-sum);
    }
}