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

    int n, m;
    cin >> n >> m;

    vector<int> vec(n);
    vector<int> prefixSum(n+1, 0);
    int total_sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        prefixSum[i+1] = prefixSum[i] + vec[i];
    }

    while(m--) {
        int l, r, k;
        cin >> l >> r >> k;

        total_sum = prefixSum[n] - prefixSum[r] + prefixSum[l-1];
        k = k * (r - l + 1);
        total_sum += k;

        if(total_sum % 2 == 0) {
            no;
        } else {
            yes;
        }
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
