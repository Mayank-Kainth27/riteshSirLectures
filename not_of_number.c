//this program is to take not of any number means... n contains any number then it will return zero if it has 0 then it will return 1..........

#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    //y=((~n)>>31)&1;
    x=(((n>>31)&1) | (((~n)+1)&1))^1;
    printf("%d",x);
    return 0;
}
