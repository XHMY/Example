#include<stdio.h>
#include<math.h>
int main()
{
    int Num,S,T;
    T=0;
    printf("Now, please Input the area that you want to find prime number:");
    scanf("%d",&Num); //Input the area that you want to find prime number
    printf("And then, we can show you the prime found by us:\n");
    for(int S=1;S<=Num;S++)
    {
        for(int n=1;n<=1000;n++)
        {
            if(S % n==0)T++;
        }
        if(T==2)printf("%d | ",S);
        T=0;
    }
    getchar();
    return 0;
}