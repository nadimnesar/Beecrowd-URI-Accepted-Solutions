#include <stdio.h>
int main()
{
    int n;
    scanf ("%d", &n);
    while(n--)
    {
        int a;
        scanf("%d", &a);
        if(a%2!=0)
        {
            printf("1\n");
        }
        else printf("0\n");
    }
    return 0;
}
