// Time Complexity = O(nlogn)
// Space Complexity = O(n)

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

    vector <int>vec(n);
    fr(0, n) {
        cin >> vec[i];
    }
    vsort;
    int ans1 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if ((vec[i] + vec[n-1]) % 2 == 0) {
            ans1 = i;
            break;
        }
    }
    int ans2 = INT_MAX;
    for (int i = n-1; i > 0; i--) {
        if ((vec[i] + vec[0]) % 2 == 0) {
            ans2 = n - i - 1;
            break;
        }
    }

    cout << min(ans1, ans2) << endl;;
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
