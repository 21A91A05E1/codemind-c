#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0,max=0,j;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c=0;
        for(j=i;s[j]!=NULL;j++)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='o' || s[j]=='u' || s[j]=='i' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
            {
                c++;
                if(max<c)
                {
                    max=c;
                }
            }
            else
            {
                break;
            }
        }
    }
    printf("%d",max);
}