#include<stdio.h>
int main()
{
    int i,n,arr[100][100],sum,j,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
    }
}