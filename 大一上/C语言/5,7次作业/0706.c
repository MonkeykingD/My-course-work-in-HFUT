#include<stdio.h>
int fun(int n, int *p1, int *p2);
int main()
{
    int num;
    int a, b;
    int iFlag;
    scanf("%d", &num);
    iFlag = fun(num, &a, &b);
    if(iFlag==0)
    {
        printf("%d -> %d:%d\n", num, a, b);
    }
    else
    {
        printf("Data error!");
    }

    return 0;
}

int fun(int n, int *p1, int *p2)
{
    int k;
    if(n<=1000||n>9999)
    {
        return 1;
    }
    k=n;
    while(k !=0)
    {
        if(k%10 ==0)
        {
            return 1;
        }

        k /=10;
    }
    *p1 = n /1000 + n %1000 / 100 * 10;
    *p2 = n % 10 * 10 +n % 100 / 10;
    return 0; 
}