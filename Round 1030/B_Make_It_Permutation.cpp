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

    vector<tuple<int, int, int>>vec;
    vec.push_back({1, 1, n});
    int i = 2;
    while( i <= n) {
        int f = n - i + 1, s = f+ 1;
        vec.push_back({i, 1, f});

        if (s <= n) {
            vec.push_back({i, s, n});
        }
        i++;
    }

    cout << vec.size() << endl;
    for (auto [i,l,r] : vec) {
        cout << i << " " << l << " " << r << endl;
    }
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
