#include<stdio.h>
int main()
{
    int i,t,n,arr[100],c=0;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                c++;
            } 
        }
        printf("%d
",(c/2));
        t-=1;
    }
}