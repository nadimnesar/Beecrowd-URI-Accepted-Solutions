#include<stdio.h>
void main()
{
    int i, a[10], v, j;
    scanf("%d", &v);
    for (i=0, j=v; i<10; i++, j=j*2)
    {
        a[i]=j;
    }
    for (i=0; i<10; i++)
    {
        printf("N[%d] = %d\n", i, a[i]);
    }
}
