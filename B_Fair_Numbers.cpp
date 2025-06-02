#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        ll n;
        cin >> n;

        while( true ) {

            ll temp = n;
            while( temp > 0 ) {

                ll x = temp % 10;
                if( x != 0 and n % x != 0 ) {
                    break;
                }
                temp /= 10;    
            }
            if( temp == 0 ) {
                break;
            }
            n++;
        }

        cout << n << endl;
    }
    return 0;
}
