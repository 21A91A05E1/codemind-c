#include<stdio.h>
int main()
{
    int n,temp,sq,count=1,d;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    while(n!=0)
    {
        d=n%10;
        count=count*10;
        n=n/10;
    }
    if(sq%count==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}