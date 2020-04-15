#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, a[n], swap, c;
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
    for (i=0; i<n; i++)
    {
        c=1;
        if(a[i]==-1)
        {
            continue;
        }
        for (j=i+1; j<n; j++)
        {
            if (a[i]==a[j])
            {
                c++;
                a[j]=-1;
            }

        }
        printf("%d aparece %d vez(es)\n", a[i], c);
    }
    return 0;
}
