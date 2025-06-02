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

        ll p , a, b, c;
        cin >> p >> a >> b >> c ;

        ll x = ceil( (double)p / (double)a);

        ll ans1 = abs( (x * a) - p );

        ll y = ceil( (double)p / (double)b);

        ll ans2 = abs( (y * b) - p );

        ll z = ceil( (double)p / (double)c);

        ll ans3 = abs( (z * c) - p );

        cout << min( ans1, min(ans2,ans3)) << endl; 
    }
    return 0;
}
