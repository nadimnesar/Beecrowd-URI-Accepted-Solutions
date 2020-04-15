#include <stdio.h>
int main()
{
    int n, i, j, r, k, x;
    while(1)
    {
        scanf("%d", &n);
        x=n;
        if(n==0)
        {
            break;
        }
        else
        {
            if(n!=0)
            {
                int s[n][n];
                if(n%2==0)
                {
                    r=n/2;
                }
                else if(n%2==1)
                {
                    r=(n/2)+1;
                }
                int p=1, q=0, t=0;
                for(k=1; k<=r; k++)
                {
                    for(i=q; i<x; i++)
                    {
                        for (j=t; j<x; j++)
                        {
                            s[i][j]=p;
                        }
                    }
                    x--;
                    p++;
                    q++;
                    t++;
                }
                for(i=0; i<n; i++)
                {
                    for (j=0; j<n; j++)
                    {
                        if(j==0)
                        {
                            printf("%3d", s[i][j]);
                        }
                        else
                            printf(" %3d", s[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
}
