#include <stdio.h>
int main()
{
    int n1, n2, i, j=0, d;
    scanf("%d %d", &n1, &n2);
    int a[n2];
    for(i=0; i<n2; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<n2; i++)
    {
        if(a[i]>a[i-1])
        {
            d=a[i]-a[i-1];
        }
        else if(a[i-1]>a[i])
        {
            d=a[i-1]-a[i];
        }
        if(d<=n1)
        {
            j++;
        }
    }
    if(j==n2-1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }
    return 0;
}
