#include<stdio.h>
#include<time.h>
int main()
{
    int Num,S,T;
    T=0;
    printf("Now, please Input the area that you want to find prime number:");
    scanf("%d",&Num); //Input the area that you want to find prime number
    printf("And then, we can show you the prime found by us:\n");
    for(int S=1;S<=Num;S++)
    {
        for(int n=1;n<=Num*10;n++)
        {
            if(S % n==0)T++;
        }
        if(T==2)printf("%d | ",S);
        T=0;
    }
    printf("Time used=%.2f\n", (double)clock()/CLOCKS_PER_SEC);
    getchar();
    return 0;
}