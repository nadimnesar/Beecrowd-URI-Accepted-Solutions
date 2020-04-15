#include <stdio.h>

int main()
{
    double n1, n2, area, altura, r, pai;
    while(scanf("%lf %lf", &n1, &n2)!=EOF)
    {
        r=n2/2;
        pai=3.14;
        area=pai*r*r;
        altura=n1/area;
        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);
    }
}
