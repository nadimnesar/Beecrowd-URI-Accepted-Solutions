#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=3; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if ((a!=0)&&(b!=0)&&(a>0)&&(b>0))
        {
            int h, l;
            if (a>b)
            {
                h=a;
                l=b;
            }
            else
            {
                h=b;
                l=a;
            }
            int j, x=0;
            for (j=l; j<=h; j=j+1)
            {
                printf("%d ", j);
                x=x+j;
            }
            printf("Sum=%d\n", x);
        }
    }
    return 0;
}
