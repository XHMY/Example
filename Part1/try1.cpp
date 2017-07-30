#include<stdio.h>
#include<math.h>
int main()
{
int t2();
t2();
getchar();
return 0;
}

int t1()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",x*y);
    return 1;
}

int t2()
{
    double x,y;
    scanf("%lf%lf",&x,&y);
    printf("%.1f\n",x*y);
    return 2;
}
