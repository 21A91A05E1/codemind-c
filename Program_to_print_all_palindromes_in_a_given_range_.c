#include<stdio.h>
int main()
{
    int n,m,i,d,rev=0,temp;
    scanf("%d%d",&n,&m);
    for(i=n;i<m;i++)
    {
        temp=i;
        rev=0;
        while(temp)
        {
            d=temp%10;
            rev=rev*10+d;
            temp=temp/10;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
    }
}