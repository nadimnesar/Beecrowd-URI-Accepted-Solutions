#include <stdio.h>

int main()
{
    int n, i=0, j=0, k=0, l=0;
    scanf("%d", &n);
    while(n--)
    {
        int x;
        scanf("%d", &x);
        if(x%2==0)
        {
            i++;
        }
        if(x%3==0)
        {
            j++;
        }
        if(x%4==0)
        {
            k++;
        }
        if(x%5==0)
        {
            l++;
        }
    }
    printf("%d Multiplo(s) de 2\n", i);
    printf("%d Multiplo(s) de 3\n", j);
    printf("%d Multiplo(s) de 4\n", k);
    printf("%d Multiplo(s) de 5\n", l);
    return 0;
}
