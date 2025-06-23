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

    vector<int>v(n);
    fr(0,n) 
        cin >> v[i];

    
    if (n < 2) {
        cout << -1 << endl;
    }
    
    for (int i = 0 ; i < n-1 ; i++) {
        if (abs(v[i] - v[i+1]) <= 1) {
            cout << 0 << endl;
            return;
        }
    }

    // if (n == 2) {
    //     if (abs(v[0] - v[1]) > 1)
    //         cout << 0 << endl;
    //     else {
    //         cout << -1 << endl;
    //     }
    //     return;
    // }
    

    int best = n;
    for(int i = 0; i < n; ++i){
        int mn = v[i], mx = v[i];
        for(int j = i+1; j < n; ++j){
            mn = min(mn, v[j]);
            mx = max(mx, v[j]);
            if(abs(v[i] - v[j]) <= 1 || abs(v[i] - mn) <= 1 || abs(v[i] - mx) <= 1 || abs(v[j] - mn) <= 1 || abs(v[j] - mx) <= 1){
                best = min(best, j - i - 1);
                break; // No need to go further for this i
            }
        }
    }

    cout << (best == n ? -1 : best) << '\n';
    
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
