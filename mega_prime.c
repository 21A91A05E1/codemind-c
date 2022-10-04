#include<stdio.h>
int main()
{
    int n,d,i,c1=0,c=0,c2=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        while(n)
        {
            d=n%10;
            for(i=2;i<d;i++)
            {
                if(d%i==0)
                {
                    c1++;
                }
            }
            if(d==1)
            {
                c2++;
            }
            n=n/10;
        }
    }
    if(c==0 && c1==0 && c2==0)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}