#include<stdio.h>
#include<time.h>

int daffodil()
{
    int f=0,s=0,t=0;
    while(f<=9)
    {
        f++;
        s=0;
        while(s<=9)
        {
            s++;
            t=0;
            while(t<=9)
            {
                t++;
                int fts1=f*f*f+s*s*s+t*t*t;
                int fts2=f*100+s*10+t;
                if(fts1==fts2)
                {
                    printf("%d\n",f*100+s*10+t);
                }
            }
        }
    }
    return 0;
}

int hanxin()
{
    int sum=0,x=0,y=0,z=0;
    scanf("%d%d%d",&x,&y,&z);
    while(sum<=100)
    {
        sum++;
        if(sum%3==x&&sum%5==y&&sum%7==z)
        {
            printf("%d\n",sum); 
        }
    }
return 0;
}

int triangle()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=0;i--)
    {
        printf("\n");
        for(int x=1;x<=2*i-1;x++)
        {
            printf("#");
        }
    }
    return 0;
}

int subsequence()
{
    int n,m;
    float s1=0,s2=0;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(int i=n;i<=m;i++)
        {
            s1=s1+(1.0/(i*i));
        }
        printf("%.5f",s1);
    }
	return 0;
}

void result(int num, int &result_add, int &result_mul)
{
	int i, j, k;
	i = num / 100;        //??
	j = num / 10 % 10;    //??
	k = num % 10;         //??
	result_add += i + j + k;    //?????????
	result_mul *= i * j * k;    //??
}
int permutation()
{
	int i, j, k;
	int result_add, result_mul;
	for (i = 123; i <= 329; i++)
	{
		j = i * 2;
		k = i * 3; //?????987
		result_add = 0;
		result_mul = 1;
		result(i, result_add, result_mul);
		result(j, result_add, result_mul);
		result(k, result_add, result_mul);
		if (result_add == 45 && result_mul == 362880)
			printf("%d %d %d\n", i, j, k);
	}
	return 0;
}

int test()
{
	double i;
	for (i = 0; i != 10; i += 0.1)
		printf("%.1f\n", i);
	return 0;
}