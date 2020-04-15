#include <stdio.h>
int main()
{
    int i, n[15], j, k, x=0, y=0, m=0, l=0;
    for(i=0; i<15; i++)
    {
        scanf("%d", &n[i]);
    }
    int odd[5], even[5];
    for(i=0; i<15; i++)
    {
        if (x==5)
        {
            for(j=0; j<5; j++)
            {
                printf("impar[%d] = %d\n", j, odd[j]);
            }
            x=0;
        }
        if (y==5)
        {
            for(k=0; k<5; k++)
            {
                printf("par[%d] = %d\n", k, even[k]);
            }
            y=0;
        }
        if (n[i]%2==0)
        {
            even[m]=n[i];
            y++;
            m++;
            if(m==5)
            {
                m=0;
            }
        }
        if (n[i]%2!=0)
        {
            odd[l]=n[i];
            x++;
            l++;
            if(l==5)
            {
                l=0;
            }
        }
    }
    for(i=0; i<x; i++)
    {
        printf("impar[%d] = %d\n", i, odd[i]);
    }
    for(i=0; i<y; i++)
    {
        printf("par[%d] = %d\n", i, even[i]);
    }
    return 0;
}
