#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        int i, j=0, k=0, l, m, c=0;
        int ds[n], es[n];
        for(i=0; i<n; i++)
        {
            int size;
            char foot;
            scanf("%d %c", &size, &foot);
            if(foot=='D')
            {
                ds[j]=size;
                j++;
            }
            else if(foot=='E')
            {
                es[k]=size;
                k++;
            }
        }
        for(l=0; l<j; l++)
        {

            for(m=0; m<k; m++)
            {
                if(ds[l]==es[m])
                {
                    c++;
                    es[m]=-1;
                    break;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
