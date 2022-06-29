#include<stdio.h>
int main()
{
    int n,rev1=0,rev2=0,sq1,sq2;
    scanf("%d",&n);
    sq1=n*n;
    while(n)
    {
        rev1=rev1*10;
        rev1=rev1+n%10;
        n=n/10;
    }
    sq2=rev1*rev1;
    while(sq2)
    {
        rev2=rev2*10;
        rev2=rev2+sq2%10;
        sq2=sq2/10;
    }
    if(sq1==rev2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}