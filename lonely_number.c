#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=0,i,n;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        x=x^(*(a+i));
    }
    printf("%d",x);
    return 0;
}
