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

        int n;
        cin >> n;
        if ( n % 2 != 0 ) {
            cout << "NO" << endl;
        }
        else {
            yes;
            char ch = 'A';

            for ( int i = 0 ; i < n/2 ; i++ ) {
                cout << ch << ch;
                ch++;
            }
            nl;
        }
        
    }
    return 0;
}
