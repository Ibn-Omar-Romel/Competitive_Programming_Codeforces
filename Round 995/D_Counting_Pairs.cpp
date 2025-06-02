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
    int n;
    ll x, y;
    cin >> n >> x >> y;

    vector<ll> vec(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];
    }

    ll l = sum - y;
    ll h = sum - x;

    vsort;

    ll count = 0;

    for (int i = 0; i < n; i++) {

        ll mn = l - vec[i];
        ll mx = h - vec[i];        

        int left = lower_bound(vec.begin() + i + 1, vec.end(), mn) - vec.begin();
        int right = upper_bound(vec.begin() + i + 1, vec.end(), mx) - vec.begin() - 1;

        if (left <= right) {
            count += (right - left + 1);
        }
    }

    cout << count << endl;
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
