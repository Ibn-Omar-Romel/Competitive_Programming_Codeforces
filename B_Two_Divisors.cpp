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

        int a,b;
        cin >> a >> b;

        if ( a > b ) swap( a, b );

        ll product = a * b ;
        ll valuelcm = lcm( a, b );
        ll valuegcd = gcd( a, b );

        if ( a == 1 ) cout << b * b << endl;
        else if ( valuegcd == 1 ) cout << a * b << endl;
        else if ( valuelcm == b ) {

            int value = b / a;
            cout << valuelcm * value << endl;
        }
        else {
            cout << valuelcm << endl;
        }      
    }
    return 0;
}

