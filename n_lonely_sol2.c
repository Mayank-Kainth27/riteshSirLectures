//this solution is for 0<a[i]<n....

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int *a=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int *arr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    { 
        arr[a[i]]++;
    }
    for(i=1;i<n;i++)
    {
        if(*(arr+i) % 2 != 0)
            printf("%d ",i);
    }
    return 0;
}
