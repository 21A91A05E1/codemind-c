#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,i;
        scanf("%d",&n);
        int arr[n],c=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}