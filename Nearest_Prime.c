#include<stdio.h>
int main()
{
    int i,j,n,bp,ap,arr[100],c=0,k,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=arr[i]-1;j>=1;j--)
        {
            c=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                bp=j;
                a=arr[i]-bp;
                break;
            }
        }
        for(j=arr[i];j<=arr[i]+50;j++)
        {
            c=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                ap=j;
                b=ap-arr[i];
                break;
            }
        }
        if(a<=b)
        {
            printf("%d
",bp);
        }
        else
        {
            printf("%d
",ap);
        }
    }
}