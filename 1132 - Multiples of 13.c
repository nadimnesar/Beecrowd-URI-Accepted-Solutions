#include <stdio.h>
int main()
{
    int i, n1, n2, sum=0, h, l;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if (n1>n2)
    {
        h=n1;
        l=n2;
    }
    else
    {
        h=n2;
        l=n1;
    }
    for (i=l; i<=h; i++)
    {
        if ((i%13)!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n", sum);
}
