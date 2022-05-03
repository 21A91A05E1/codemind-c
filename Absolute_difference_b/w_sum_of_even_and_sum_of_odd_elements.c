#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,arr[100],s1=0,s2=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)
        {
            s1=s1+arr[i];
        }
        if(arr[i]%2==0)
        {
            s2=s2+arr[i];
        }
    }
    diff=abs(s1-s2);
    printf("%d",diff);
}