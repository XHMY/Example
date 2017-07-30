#include<stdio.h>
#include<math.h>
#include<time.h>

int search7744()
{
    for(int a=1;a<=9;a++)
    for(int b=1;b<=9;b++)
    {
        int n=a*10+b*11;
        int m=floor(sqrt(n)+0.5);//加0.5是为了避免误差
        if(m*m==n)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}

int affinity()
{
    double sum=0;
    int i=0;
    double tern;
    const double pi=acos(-1.0);
    do
    {
        i++;
        tern=1.0/(i*2.0+1.0);
        if(i%2==0)sum+=tern;
        else sum-=tern;
    }
    while(tern>1e-8);
    printf("complete  %.8f\n""%.8f\n""%d",tern,sum+1-1/4*pi,i);
    return 0;
}

int sumoffactorial()
{
    const int m =1000000;
    int n, s=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int factorial=1;
        for(int j=1;j<=i;j++)
        {
            factorial=factorial*j%m;
        }
            s=(factorial+s)%m;
        printf("No.%d   %d\n",i,factorial);
    }
    printf("The answer is %d",s);
    return 0;
}