#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],sum=0,i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=int(sqrt(arr[i]));
        if(arr[i]==s*s)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}