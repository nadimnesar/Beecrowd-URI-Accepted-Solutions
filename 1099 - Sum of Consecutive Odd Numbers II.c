#include<stdio.h>
int main()
{
    int a, j;
    scanf("%d",&a);
    for(j=1 ; j<=a ; j++)
    {
        int i,x,y,temp,sum=0;
        scanf("%d %d",&x,&y);
        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        for(i=x+1 ; i<y ; i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
