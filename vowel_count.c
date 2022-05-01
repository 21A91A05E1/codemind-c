#include<stdio.h>
int main()
{
    char s[100];
    int v,i;
    scanf(" %[^
]s",&s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            v++;
        }
    }
    printf("%d",v);
}