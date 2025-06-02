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
    
    ll n;
    cin >> n;

    map<ll, ll> mpx, mpy;
    vector<pair<ll, ll>> vec;
    for (int i = 0; i < n; i++) {

        ll x, y;
        cin >> x >> y;
        vec.push_back({x, y});
        mpx[x]++;
        mpy[y]++;
    }

    if (n == 1) {
        cout << "1\n";
        return;
    }

    
    ll current_x = (--mpx.end())->first - (mpx.begin()->first) + 1;
    ll current_y = (--mpy.end())->first - (mpy.begin()->first) + 1;

    ll area = current_x * current_y;
    
    for (int i = 0; i < n; i++) {

        mpx[vec[i].first]--;
        mpy[vec[i].second]--;

        if (mpx[vec[i].first] == 0) {
            mpx.erase(vec[i].first);
        }
        if (mpy[vec[i].second] == 0) {
            mpy.erase(vec[i].second);
        }

        ll new_x = (--mpx.end())->first - (mpx.begin()->first) + 1;
        ll new_y = (--mpy.end())->first - (mpy.begin()->first) + 1;

        ll new_area = new_x * new_y;

        if (new_area == n-1) {
            new_area = min(new_area+new_x, new_area+new_y);
        }

        area = min(area, new_area);

        mpx[vec[i].first]++;
        mpy[vec[i].second]++;
    }
    cout << area << "\n";
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
