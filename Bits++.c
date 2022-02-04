#include<stdio.h>
int main()
{
    char s[3];
    int x=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%s",s);
        if(s[2]=='+' || s[0]=='+')
        {
        x=x+1;
        }
        else if(s[0]=='-' || s[2]=='-')
        {
        x=x-1;
        }
        n--;
    }
    printf("%d",x);
    return 0;
}