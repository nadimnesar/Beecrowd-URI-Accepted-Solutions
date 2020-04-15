#include<stdio.h>

int main()
{
    int A, N, i, sum=0, j=0;
    scanf("%d", &A);
    again:
    scanf("%d", &N);
    if (N<0||N==0)
    {
        goto again;
    }
    for (i=A; i<A+N ;i++)
    {
        j++;
        sum=sum+i;
        if (j==N)
        {
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}
