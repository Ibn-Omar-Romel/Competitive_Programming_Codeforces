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

    ll n, x;
    cin >> n >> x;

    ll b = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;

        sum += a;
        b += ceil(a / (double)x);
    }
    ll y = ceil(sum / (double)x);
    
    cout << y << " "  << b << endl;
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
