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

        vector < int > vec(2*n);
        for(int i = 0 ; i < 2*n ; i++ ) {

            cin >> vec[i];
        }

        sort( vec.begin(), vec.end() );
        ll ans = 0;
        for ( int i = 0 ; i < 2*n; i+= 2 ) {

            ans += min( vec[i], vec[i+1]);
        }
        cout << ans << endl;
        
    }
    return 0;
}
