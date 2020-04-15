#include <stdio.h>
int main()
{
    int t1, t2, t3, sum;
    scanf("%d %d %d", &t1, &t2, &t3);
    if(t1==0)
    {
        t1=24;
    }
    else if(t2==0)
    {
        t2=24;
    }
    else if(t3==0)
    {
        t3=24;
    }
    sum=t1+t2+t3;
    if(sum>24)
    {
        sum-=24;
    }
    else if(sum==24)
    {
        sum=0;
    }
    printf("%d\n", sum);
}
