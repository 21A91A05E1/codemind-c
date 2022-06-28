#include<stdio.h>
int main()
{
    int i,n,arr[100],temp,c=0,rev=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(temp)
        {
            d=temp%10;
            rev=rev*10+d;
            temp=temp/10;
        }
        if(arr[i]==rev)
        {
            c++;
        }
    }
    printf("%d",c);
}