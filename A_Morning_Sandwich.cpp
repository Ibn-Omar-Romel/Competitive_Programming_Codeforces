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

        int b , c, h;
        cin >> b >> c >> h;

        c += h;

        int m = min( b,c);

        if ( c == b ) cout << b + b - 1 << endl;
        else if ( m == c ) cout << c + c + 1 << endl;
        else cout << b + b - 1 << endl;  
    }
    return 0;
}
