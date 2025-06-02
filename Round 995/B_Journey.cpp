#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl


#define fr(a, b) for(int i = a; i < b; i++) 


void solve() {

    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll cysum = a + b + c;
    ll fcy = (n - 1) / cysum;
    ll day = fcy * 3;

    ll v = fcy * cysum; 

    if (v < n) {
        v += a;
        day++;
    }
    if (v < n) {
        v += b;
        day++;
    }
    if (v < n) {
        v += c;
        day++;
    }

    cout << day << endl;
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
