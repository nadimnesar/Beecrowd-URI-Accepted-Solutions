#include <stdio.h>
int main()
{
    int i, a[20], j, k, temp;
    for (i=0; i<20; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j=0, k=19; j<10; j++, k--)
    {
        temp=a[j];
        a[j]=a[k];
        a[k]=temp;
    }
    for (i=0; i<20; i++)
    {
        printf("N[%d] = %d\n", i, a[i]);
    }
    return 0;
}
