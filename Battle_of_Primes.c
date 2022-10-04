#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0,b;
    b=int(pow(n,0.5));
    for(i=2;i<=int(b);i++)
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
    int a,b,j,k,r;
    scanf("%d",&a);
    scanf("%d",&b);
    k=a+b;
    for(j=1;j<=10;j++)
    {
        r=k+j;
        if(prime(r))
        {
            printf("%d",j);
            break;
        }
    }
}