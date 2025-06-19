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
    map<int, vector<int>>mp;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        mp[vec[i]].push_back(i+1);
    }

    for (auto [val, v] : mp) {
        if (v.size() == 1) {
            cout << -1 << endl;
            return;
        }
    }

    vector<int>position(n+1);
    for (auto [val, v] : mp) {

        int length = v.size();
        for (int i = 0; i < length ; i++) {
            position[v[i]] = v[(i+1) % length];
        }
    } 

    for (int i = 1; i <= n; i++) {
        cout << position[i] << " ";
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
