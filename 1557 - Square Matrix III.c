#include<stdio.h>
int digit(int x)
{
    int a=x,b=0;
    while(a)
    {
        a/=10;
        b++;
    }
    return b;
}
int main()
{
    int n, z, d, h, p, e;
again:
    scanf("%d", &n);
    z=n-1;
    if(n!=0)
    {
        int i, j, k, x=1, f, g;
        int m[n][n];
        for(i=0; i<n; i++)
        {
            k=x;
            for(j=0; j<n; j++)
            {
                m[i][j]=k;
                k*=2;
            }
            x*=2;
        }
        //--------------
        d=digit(m[z][z]);
        //--------------
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0)
                {
                    h=m[i][j];
                    e=digit(h);
                    p=d-e;
                    for(f=1; f<=p; f++)
                        printf(" ");
                    printf("%d",m[i][j]);
                }
                else
                {
                    h=m[i][j];
                    e=digit(h);
                    p=d-e;
                    for(f=1; f<=p; f++)
                        printf(" ");
                    printf(" %d",m[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
        goto again;
    }
    return 0;
}
