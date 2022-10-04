#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,a,c=0;
    a=int(pow(n,0.5));
    for(i=2;i<=a;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int b,i,j,k,c=0;
    scanf("%d",&b);
    for(j=2;j<=b;j++)
    {
        for(k=2;k<=b;k++)
        {
            if(prime(j) && prime(k) && j*k==b && j<k)
            {
                printf("%d %d",j,k);
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}