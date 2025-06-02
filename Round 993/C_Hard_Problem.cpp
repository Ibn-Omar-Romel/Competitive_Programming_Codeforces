#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


void solve() {

    int m, a, b, c;
    cin >> m >> a >> b >> c;

    ll total = 2 * m;

    ll ans = 0;
    if (m >= a) {
        ans += a;
        total -= a;
    }
    else {
        ans += m;
        total -= m;
    }

    if (m >= b) {
        ans += b;
        total -= b;
    }
    else {
        ans += m;
        total -= m;
    }

    if (total <= c)
        ans += total;
    else 
        ans += c;

    cout << ans << endl;

}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}
