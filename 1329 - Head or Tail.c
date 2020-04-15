#include<stdio.h>
int main()
{
    while(1)
    {
        int n, m=0, j=0;
        scanf("%d", &n);
        if(n==0)
            break;
        while(n--)
        {
            int ht;
            scanf("%d", &ht);
            if(ht==0)
            {
                m++;
            }
            else if(ht==1)
            {
                j++;
            }
        }
        printf("Mary won %d times and John won %d times\n", m, j);
    }
    return 0;
}
