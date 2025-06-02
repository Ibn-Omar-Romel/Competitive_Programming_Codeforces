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

    ll n, x, y;
    cin >> n >> x >> y;
   

    ll a = n / x;
    ll b = n / y;

    ll L = (x * y) / gcd(x, y);
    ll c = n / L;

    a -= c;
    b -= c;

    ll sum = (n * (n+1)) / 2;
    a = n - a;
    sum -= ((a * (a+1)) / 2);
    sum -= ((b * (b+1)) / 2);


    cout << sum << endl;
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
