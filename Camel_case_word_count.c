#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,s=1;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=1;i<len-1;i++)
    {
        if(str[i]>=65 && str[i]<=91)
        {
            s++;
        }
    }
    printf("%d",s);
}