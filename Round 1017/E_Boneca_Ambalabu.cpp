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
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(30, 0); 

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        for (int bit = 0; bit < 30; ++bit) {
            if (a[i] & (1 << bit)) {
                cnt[bit]++;
            }
        }
    }

    ll max_sum = 0;

    for (int i = 0; i < n; ++i) {
        ll current = 0;
        for (int bit = 0; bit < 30; ++bit) {
            if (a[i] & (1 << bit)) {
                current += (1LL << bit) * (n - cnt[bit]);
            } else {
                current += (1LL << bit) * cnt[bit];
            }
        }
        max_sum = max(max_sum, current);
    }

    cout << max_sum << "\n";
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
