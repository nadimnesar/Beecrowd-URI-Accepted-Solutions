#include <stdio.h>
#include <math.h>
#include <string.h>
int BtoD(int binary)
{
    int i=0, decimal=0;
    while(binary!=0)
    {
        decimal=decimal+pow(2, i)*(binary%10);
        binary/=10;
        i++;
    }
    binary=decimal;
    return binary;
}
int main()
{
    char blink[8];
    int i, sum=0, decimal;
    for (i=0; i<3; i++)
    {
        while(strcmp(blink, "caw caw")!=0)
        {
            gets(blink);
            if(!strcmp(blink, "--*"))
            {
                decimal=1;
                decimal=BtoD(decimal);
                sum+=decimal;
            }
            else if(!strcmp(blink, "-*-"))
            {
                decimal=10;
                decimal=BtoD(decimal);
                sum+=decimal;
            }
            else if(!strcmp(blink, "*--"))
            {
                decimal=100;
                decimal=BtoD(decimal);
                sum+=decimal;
            }
            else if(!strcmp(blink, "---"))
            {
                decimal=0;
                decimal=BtoD(decimal);
                sum+=decimal;
            }
            else if(!strcmp(blink, "***"))
            {
                decimal=111;
                decimal=BtoD(decimal);
                sum+=decimal;
            }
            else if(!strcmp(blink, "-**"))
            {
                decimal=11;
                decimal=BtoD(decimal);
                sum+=decimal;
            }
            else if(!strcmp(blink, "*-*"))
            {
                decimal=101;
                decimal=BtoD(decimal);
                sum+=decimal;
            }
            else if(!strcmp(blink, "**-"))
            {
                decimal=110;
                decimal=BtoD(decimal);
                sum+=decimal;
            }
        }
        printf("%d\n", sum);
        sum=0;
        blink[0]='a';
    }
    return 0;
}
