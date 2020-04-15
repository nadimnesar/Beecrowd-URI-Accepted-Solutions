#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d", &n);
        if(n==0)
            break;
        int Ac=0, Bc=0;
        while(n--)
        {
            int A, B;
            scanf("%d %d", &A, &B);
            if(A>B)
            {
                Ac++;
            }
            else if(A<B)
            {
                Bc++;
            }
        }
        printf("%d %d\n", Ac, Bc);
    }
    return 0;
}
