#include<stdio.h>
#include<string.h>
int main()
{
    while(1)
    {
        char s[1051];
        fgets(s, 1051, stdin);
        if(s[0]=='*')
            break;
        int i, n, c=0;
        n=strlen(s);
        for(i=0; i<n; i++)
        {
            s[i]=tolower(s[i]);
        }
        for(i=1; i<n; i++)
        {
            if(s[i]==' ')
            {
                if(s[i+1]!=s[0])
                {
                    c++;
                }
            }
        }
        if(c>0)
        {
            printf("N\n");
        }
        else printf("Y\n");
    }
    return 0;
}
