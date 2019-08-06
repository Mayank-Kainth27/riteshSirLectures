//this code output is not correct in all test cases such as when we put length 7 an array 1 2 3 4 1 2 3 the output should be 4 but it gives 3.....
// And this was also valid only if 0<a[i]<n which a[i] means value at index in array......
//it was because i didn't took mod of the value at respected index...


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,m;
    scanf("%d",&n);
    int *a=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        m=*(a+i);
        if(m<0)
            m*=-1;
        *(a+m)=*(a+m) * -1;
    }
    for(i=0;i<n;i++)
    {
        if(*(a+i)<0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
