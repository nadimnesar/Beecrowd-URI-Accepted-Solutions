#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    while(a--)
    {
        char name1[101], name2[101], ip1[6], ip2[6];
        long long int n1, n2, sum;
        scanf("%s %s %s %s", name1, ip1, name2, ip2);
        scanf("%lld %lld", &n1, &n2);
        sum=n1+n2;
        if(sum%2==0)
        {
            if(!strcmp(ip1, "PAR"))
            {
                printf("%s\n", name1);
            }
            if(!strcmp(ip2, "PAR"))
            {
                printf("%s\n", name2);
            }
        }
        else
        {
            if(!strcmp(ip1, "IMPAR"))
            {
                printf("%s\n", name1);
            }
            if(!strcmp(ip2, "IMPAR"))
            {
                printf("%s\n", name2);
            }
        }
    }
    return 0;
}
