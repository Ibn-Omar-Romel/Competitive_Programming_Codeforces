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

        ll x;
        cin >> x;

        int flag = 0;
        ll a , b , value1 , value2;
        for ( ll i = 1 ; i < 10000; i++ ) {

            a = i;
            value1 = a * a * a;
            value2 = x - value1;
            if (value2 <= 0) {continue;}
            b = cbrt(value2);
            value2 = b * b * b;

            //cout << value1 << " " << value2 << endl;
            if ( value1 + value2 == x  ) {
                flag = 1;
                break;
            }
        }
        if( flag == 0 ) no;
        else yes;
    }
    return 0;
}
