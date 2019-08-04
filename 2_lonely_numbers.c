#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int n,c=0,a=0,b=0;
	int *arr=NULL;
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int x=0;
	for(int i=0;i<n;i++)
	{
	    x=x^arr[i];
	}
	//printf("%d",x);
    while((x&1)==0)
    {
        x=x>>1;
        c++;
    }
    int s=pow(2,c);
    for(int i=0;i<n;i++)
    {
        if((arr[i] & s)==0)
        {
            a=a^arr[i];
        }
        else
        {
            b=b^arr[i];
        }
    }
    printf("%d %d",a,b);
	return 0;
}
