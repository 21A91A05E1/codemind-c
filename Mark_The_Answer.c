#include<stdio.h>
int main()
{
    int a,b,arr[100],i,c=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]>=b)
        {
            c++;
        }
    }
    printf("%d",c);
}