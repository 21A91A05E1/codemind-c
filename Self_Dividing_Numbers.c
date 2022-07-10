#include<stdio.h>
int main()
{
    int i,n,m,d,temp,sc=0,c=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        temp=i;
        sc=0;
        c=0;
        while(temp)
        {
            d=temp%10;
            temp=temp/10;
            c+=1;
            if(d==0)
            {
                break;
            }
            if(i%d==0)
            {
                sc+=1;
            }
        }
        if(sc==c)
        {
            printf("%d ",i);
        }
    }
}