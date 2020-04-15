#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n1, n2, n3, n4, avg, n5;
    cin >> n1 >> n2 >> n3 >> n4;
    avg=(((n1*2)+(n2*3)+(n3*4)+(n4*1))/10);
    cout << "Media: " << fixed << setprecision(1) << avg << endl;
    if(avg<5.00)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if(avg>=7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if(5.0<avg<6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        avg=(avg+n5)/2;
        if(avg>=5.0)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << avg << endl;
        }
        else if(avg<=4.9)
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << avg << endl;
        }
    }
}
