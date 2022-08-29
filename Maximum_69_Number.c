#include<stdio.h>
int main()
{
    int n,a[100],d,j,i;
    scanf("%d",&n);
    i=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        a[i]=d;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(a[j]==6)
        {
            a[j]=9;
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    
}