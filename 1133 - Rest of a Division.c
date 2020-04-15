#include <stdio.h>
int main()
{
    int i, n1, n2, h, l;
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
    for (i=l+1; i<=h-1; i++)
    {
        if ((i%5)==2||(i%5)==3)
        {
            printf("%d\n", i);
        }
    }
}
