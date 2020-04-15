#include <stdio.h>
int main()
{
    int i, j, T, n[1000];
    scanf("%d", &T);
    for (i=0, j=0; i<1000; i++, j++)
    {
        if(j==T)
        {
            j=0;
        }
        n[i]=j;
    }
    for (i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}
