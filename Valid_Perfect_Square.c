#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,s,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        s=sqrt(a);
        if(int(pow(s,2))==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
    }
}