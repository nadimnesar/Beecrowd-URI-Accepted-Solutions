#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, high;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    high=((n1-1)+(n2-1)+(n3-1)+n4);
    printf("%d\n", high);
    return 0;
}
