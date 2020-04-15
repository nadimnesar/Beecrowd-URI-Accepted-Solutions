#include<stdio.h>
int main()
{
    int n, sum=0, c=0;
    while(scanf("%*[^\n]s")!=EOF)
    {
        scanf("%d", &n);
        c++;
        sum=sum+n;
    }
    double avg;
    avg=(double)sum/c;
    printf("%.1lf\n", avg);
    return 0;
}
