#include<stdio.h>
int main()
{
    while(1)
    {
        int h1, m1, h2, m2, sleep=0;
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        if(h1==0)
        {
            h1=24;
        }
        if(h2==0)
        {
            h2=24;
        }
        h1=(h1*60)+m1;
        h2=(h2*60)+m2;
        sleep=h2-h1;
        if(sleep<0)
        {
            sleep=sleep+1440;
        }
        printf("%d\n", sleep);
    }
    return 0;
}
