#include<stdio.h>
int main()
{
    char str[100];
    int n,c=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        if(str[0]=='+' or str[1]=='+')
        {
            c+=1;
        }
        else
        {
            c-=1;
        }
    }
    printf("%d",c);
}