#include <bits/stdc++.h>
using namespace std;
#define ll              long long int
#define ull             long long unsigned int
#define vll             vector< ll >
#define pb              push_back
#define all(x)          x.begin(), x.end()
#define point(x)        fixed << setprecision(x)
#define PI              acos(-1.0) //3.1415926535897932
#define EPS             1e-9
#define MAX             15000
#define yes             cout << "yes" << endl
#define no              cout << "no" << endl
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define FASTIO          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main()
{
    FASTIO;
    ll n, sum=0, cn=0;
    cin >> n;
    vll x(n);
    for(ll i=0; i<n; i++)
        cin >> x[i];
    vll x2;
    x2 = x;
    ll i=0;
    while(1)
    {
        if(x[i]==0)
        {
            i--;
        }
        else if(x[i]%2==0)
        {
            x[i]--;
            i--;
        }
        else if(x[i]%2!=0)
        {
            x[i]--;
            i++;
        }
        if(i<0 || i>n-1) break;
    }
    for(ll i=0; i<n; i++)
    {
        if(x2[i]!=x[i]) ++cn;
        sum+=x[i];
    }
    cout << cn << " " << sum << endl;
}
