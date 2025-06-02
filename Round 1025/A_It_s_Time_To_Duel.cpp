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
    vector<int> vec(n);
    int ones = 0;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        if (vec[i] == 1) {
            ones++;
        }
    }
    if (ones == n) {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < n-1; i++) {
        if (vec[i] == 0 and vec[i+1] == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
