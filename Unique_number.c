#include<stdio.h>
int main()
{
    int i,n,d;
    static int arr[10];
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        arr[d]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>1)
        {
            printf("Not Unique Number");
            break;
        }
    }
    if(i==10)
    {
        printf("Unique Number");
    }
}