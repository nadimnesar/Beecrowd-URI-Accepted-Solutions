#include <iostream>
using namespace std;
int main()
{
    double a[3], temp;
    int i, j;
    for(i=0; i<3; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(a[0]>=(a[1]+a[2]))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
        if(a[0]==a[1] && a[1]==a[2])
            cout << "TRIANGULO EQUILATERO" << endl;
        else if(a[0]==a[1] || a[1]==a[2] || a[2]==a[0])
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    else if((a[0]*a[0])== ((a[1]*a[1])+(a[2]*a[2])))
    {
        cout << "TRIANGULO RETANGULO" << endl;
        if(a[0]==a[1] && a[1]==a[2])
            cout << "TRIANGULO EQUILATERO" << endl;
        else if(a[0]==a[1] || a[1]==a[2] || a[2]==a[0])
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    else if((a[0]*a[0]) > ((a[1]*a[1])+(a[2]*a[2])))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
        if(a[0]==a[1] && a[1]==a[2])
            cout << "TRIANGULO EQUILATERO" << endl;
        else if(a[0]==a[1] || a[1]==a[2] || a[2]==a[0])
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    else if((a[0]*a[0]) < ((a[1]*a[1])+(a[2]*a[2])))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
        if(a[0]==a[1] && a[1]==a[2])
            cout << "TRIANGULO EQUILATERO" << endl;
        else if(a[0]==a[1] || a[1]==a[2] || a[2]==a[0])
            cout << "TRIANGULO ISOSCELES" << endl;
    }
}
