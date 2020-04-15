#include<stdio.h>
int main()
{
    while(1)
    {
        int s, d;
        scanf("%d %d", &s, &d);
        if(s==0 && d==0)
            break;
        int sum;
        sum=s+d;
        printf("%d\n", sum);
    }
    return 0;
}
