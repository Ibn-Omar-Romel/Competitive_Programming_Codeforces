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

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int>result(n, 0);

    ll mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (mn > vec[i]) {
            result[i] = 1;
            mn = vec[i];
        }
    }
    
    ll mx = 0;
    for (int i = n-1; i >= 0; i--) {
        if (mx < vec[i]) {
            result[i] = 1;
            mx = vec[i];
        }
    }



    for (int i = 0; i < n; i++) {
        cout << result[i];
    }
    cout << endl;
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
