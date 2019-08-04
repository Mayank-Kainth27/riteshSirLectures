//this program is to take not of any number means... n contains any number then it will return zero if it has 0 then it will return 1..........

#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,x,y,z,q,w;
    scanf("%d",&n);
    y=((~n)>>31)&1;
    x=((((n>>31)&1)|(((~n)>>31))^1));
    printf("%d",y);
    return 0;
}
