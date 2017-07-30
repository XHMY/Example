#include<stdio.h>
#include<math.h>
int main()
{
    int discount();
    discount();
    getchar();
    return 0;
}
int average()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("%.3f\n",(a+b+c)/3);
    return 0;
}
int temperature()
{
    double f;
    scanf("%lf",&f);
    printf("%.3f",5*(f-32)/9);
    return 0;
}
int sum()
{
    int n;
    scanf("%d",&n);
    printf("%d",(1+n)*n/2);
    return 0;
}
int s()
{
    int n;
    const double pi=acos(-1.0); //Get pi.
    scanf("%d",&n);
    printf("%.3f\n\%.3f",sin(n*pi/180),cos(n*pi/180));//Turn DEG into RAD.
    return 0;
}
int discount()
{
    int n;
    scanf("%d",&n);
    if(n*95<300)
        printf("%.2f",95.*n); //此处常数95必须有小数点表示伟浮点数
    else
        printf("%.2f",95.*n*0.85);
    return 0;
}

//ZYF finish the teat on June 9,2017