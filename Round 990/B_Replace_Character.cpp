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

    string s;
    cin >> s;

    map<char, int>mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    int mx = INT_MIN, mn = INT_MAX;
    char mnch, mxch;

    for (auto it : mp) {
        if (it.second < mn) {
            mn = it.second;
            mnch = it.first;
        }

        if (it.second >= mx) {
            mx = it.second;
            mxch = it.first;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == mnch) {
            s[i] = mxch;
            break;
        }
    }
    cout << s << endl; 
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
