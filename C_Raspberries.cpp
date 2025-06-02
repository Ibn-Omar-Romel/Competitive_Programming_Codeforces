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

        int n, k;
        cin >> n >> k;

        int m = INT_MAX;
        ll product  = 1;
        int even = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            int a;
            cin >> a;
            product *= a;
            
            if( a % 2 == 0 ) {
                even++;
            }
            if ( a % k == 0 ) 
                m = 0;
            
            m = min(m, k - (a%k));
        }


        if ( k == 4 ) {

            if( even >= 2 ) 
                cout << 0 << endl;
            else if ( even == 1 )
                cout << min(m,1) << endl;
            else 
                cout << min(m,2) << endl;
        }
        else 
            cout << m << endl;
    }
    return 0;
}
