#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,i,j,temp,c=0,rev=0,k;
    scanf("%d",&n);
    for(i=n+1;i<=n+10000;i++)
    {
        c=0;
        temp=i;
        rev=0;
        while(temp)
        {
            d=temp%10;
            rev=rev*10+d;
            temp=temp/10;
        }
        if(rev==i)
        {
            for(j=2;j<=int(pow(i,0.5));j++)
            {
               if(i%j==0)
               {
                   c++;
               }
            }
            if(c==0)
            {
                printf("%d",i);
                break;
            }
        }
        
    }
}