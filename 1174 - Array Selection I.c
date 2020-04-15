#include<stdio.h>
void main()
{
    int i, j;
    float a[100];
    for (i=0; i<100; i++)
    {
        scanf("%f", &a[i]);
    }
    for (j=0; j<100; j++)
    {
        if (a[j]<=10.00)
        {
            printf("A[%d] = %.1f\n", j, a[j]);
        }
    }
}
