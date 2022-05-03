#include<stdio.h>
int main()
{
    int arr[100],n,i,s1=0,s2=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+arr[i];
        }
        if(i%2)
        {
            s2=s2+arr[i];
        }
    }
    diff=s1-s2;
    printf("%d",diff);
}