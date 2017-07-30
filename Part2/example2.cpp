#include<stdio.h>
#include<time.h>
int statistics()
{
    int x=0 ,max=0 ,min=0, n=0,sum=0;
    while(scanf("%d",&x)==1)
    {
        sum+=x;
        if(x<min) min=x;
        if(x>max) max=x;
        n++;
    }
    printf("Sum=%d",&sum);
    // \nMax=%d \nMin=%d"
    return 0;
}