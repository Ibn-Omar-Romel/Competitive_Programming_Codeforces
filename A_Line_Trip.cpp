#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n, x;
        cin >> n >> x;

        int m = INT_MIN;
        int a[n];

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> a[i];

            if ( i > 0 )
            m = max ( a[i]-a[i-1] , m);
        }

        m = max( a[0], max(m, 2 *(x - a[n-1])));
        
        if ( n == 1 ) {
            cout << max(a[0], 2 * ( x - a[0])) << endl;
        }
        else
            cout << m << endl;
        
    }
    return 0;
}
