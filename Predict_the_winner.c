#include<stdio.h>
int main()
{
    int i,arr[100],n,c=0,c1=0,c2=0,c3=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%4==0)
        {
            c++;
        }
        else if(arr[i]%4==1)
        {
            c1++;
        }
        else if(arr[i]%4==2)
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    if(c%2==0 and c1%2==0 and c2%2==0 and c3%2==0)
    {
        printf("X");  
    }
    else
    {
        printf("Y");  
    }
}