#include<stdio.h>
int main()
{
    int n, ans;
    scanf("%d", &n);
    while(n--)
    {
        int d1, d2;
        char c;
        scanf("%d%c%d", &d1, &c, &d2);
        int nc;
        nc=c;
        if(d1==d2)
        {
            ans=d1*d2;
        }
        else if(nc>=65 && nc<=90 && d1!=d2)
        {
            ans=d2-d1;
        }
        else if(nc>=97 && nc<=122 && d1!=d2)
        {
            ans=d2+d1;
        }
        printf("%d\n", ans);
    }
    return 0;
}
