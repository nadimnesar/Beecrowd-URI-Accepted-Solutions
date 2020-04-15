#include <stdio.h>
int main()
{
    int n, i, j, k;
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
        {
            break;
        }
        else
        {
            if(n!=0)
            {
                int s[n][n];
                for(i=0; i<n; i++)
                {
                    for (j=0; j<n; j++)
                    {
                        s[i][j]=1;
                    }
                }
                int x, y, z, f, g;
                z=n-1;
                for(i=0, f=1, g=2; i<z; i++)
                {
                    for (j=0, k=f; k<n; k++, j++)
                    {
                        s[j][k]=g;
                    }
                    f++; g++;
                }
                for(i=0, f=1, g=2; i<z; i++)
                {
                    for (j=f, k=0; j<n; k++, j++)
                    {
                        s[j][k]=g;
                    }
                    f++; g++;
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
