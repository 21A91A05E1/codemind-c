#include<stdio.h>
int main()
{
    int t,n,a,b,k,p1,p2,p3,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        p1=((n-a)/a)+1;
        p2=((n-b)/b)+1;
        p3=((n-a*b)/(a*b))+1;
        if((p1+p2-p3)>k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");   
        }
    }
}