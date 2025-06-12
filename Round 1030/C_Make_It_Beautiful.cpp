#include<bits/stdc++.h>

using namespace std;

#define ll unsigned long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> vec(n);

    fr(0,n) 
        cin >> vec[i];

    ll ans = 0;
    for (auto v : vec) {

        int a = __builtin_popcountll(v);
        ans += a;
    }
    
    vector<ll> cost;
    cost.reserve(n * 60);

    for (auto v : vec) {
        ll cur = v;
        while (true) {
            int p = __builtin_ctzll(~cur); 
            if (p >= 60) 
                break;
            ll c = 1ULL << p;
            if (c > (ll)k) 
                break;

            cost.push_back(c);
            cur += c;
        }
    }

    sort(cost.begin(), cost.end()); 

    ll used = 0;
    long long gained = 0;
    for (auto c : cost) {
        if (used + c > (ll)k) break;
        used += c;
        ++gained;
    }

    cout << ans + gained << '\n';
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
