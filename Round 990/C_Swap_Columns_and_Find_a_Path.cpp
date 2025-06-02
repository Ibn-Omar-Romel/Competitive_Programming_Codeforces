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

    vector<vector<int>>arr(2, vector<int>(n));
    for (int i = 0 ; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    ll sum = INT_MIN;
    for (int i = 0; i < n; i++) {
        ll extra = arr[0][i] + arr[1][i];
        
        for (int j = 0; j < n; j++) {
            if (i != j) {
                extra += max(arr[0][j], arr[1][j]);
            }
        }
        sum = max(sum, extra);
    }
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
