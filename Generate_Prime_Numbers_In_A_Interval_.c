#include<stdio.h>
int main()
{
    int i,n,m,fact=0,j;
    scanf("%d%d",&n,&m);
    for(i=n;i<m;i++)
    {
        fact=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                fact+=1;
            }
        }
        if(fact==2)
        {
            printf("%d
",i);
        }
    }
}