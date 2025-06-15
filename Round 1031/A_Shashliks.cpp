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

    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    if (a > k and b > k) {
        cout << 0 << endl;
        return;
    }

    if ( x > y) {
        swap(a, b);
        swap(x,y);
    }
    int ans1 = 0, total = 0;

    if (k >= a) {
        ans1 = (k-a) / x+1;
        k -= (ans1*x);
        total = ans1;
    }

    int ans2 = 0;
    if (k >= b) {
        ans2 = (k-b) / y+1;
    }
    cout << total + ans2 << endl;
    
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
