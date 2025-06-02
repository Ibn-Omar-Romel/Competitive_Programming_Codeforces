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
    string s;
    cin >> s;

    int n = s.size();

    int first_zero = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            first_zero = i;
            break;
        }
    }

    if (first_zero == -1) {
        cout << 1 << " " << n << " " << 1 << " " << 1 << "\n";
    } else {
        cout << 1 << " " << n << " " << 1 << " " << n-first_zero << "\n";
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
