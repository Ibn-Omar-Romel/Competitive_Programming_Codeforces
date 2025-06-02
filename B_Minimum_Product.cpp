#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        ll tempa= a;
        ll tempb = b;
        ll tempn = n;

        int mina = min(a-x, n);
        a -= mina;
        n -= mina;

        int minb = min(b-y,n);
        b -= minb;

        
        ll mintb = min(tempb - y , tempn);
        tempb -= mintb;
        tempn -= mintb;

        int minta = min(tempa - x, tempn);
        tempa -= minta;


        //cout << a << " " << b << endl;
        //cout << tempa << " " << tempb << endl;

        cout << min(a*b, tempa*tempb) << endl;

        
    }
    return 0;
}
