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

        int n , k , x;
        cin >> n >> k >> x;

        if ( n == k and x != k ) {
            yes;
            cout << 1 << endl;
            cout << n << endl;
        }
        else if ( k == 1 and x == 1 ) no;

        else if ( n % 2 != 0 ) {
            if ( x != 1 ) {
                yes;
                cout << n << endl;
                for ( int i = 0 ; i < n ; i++ ) {

                    cout << 1 << " ";
                }
                nl;
            }
            else if ( k >= 3 ) {

                yes;
                n -= 3;
                cout << (n/2) + 1 << endl;
                for ( int i = 0 ; i < n/2 ; i++ ) {

                    cout << 2 << " ";
                }
                cout << 3 << endl;
            }
            else no;
        }
        else {

            if ( k >= 2 and x != 2 ) {

                yes;
                cout << n / 2 << endl;
                for ( int i = 0 ; i < n/2 ; i++ ) {

                    cout << 2 << " ";
                }
                nl;
            }
            else if ( x == 2 ) {

                yes;
                cout << n << endl;
                for ( int i = 0 ; i < n ; i++ ) {

                    cout << 1 << " ";
                }
                nl;
            }
            else no;
        }
        
    }
    return 0;
}
