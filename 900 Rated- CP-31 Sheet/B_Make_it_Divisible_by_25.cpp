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
    int ans = INT_MAX;

    //00
    for (int i = n-1; i >= 0; i--) {
        if (s[i] == '0') {
            for (int j = i-1; j >= 0; j--) {

                if (s[j] == '0') {
                    ans = min(ans, (i-j-1) + (n-i-1));
                    break;
                }
            }
        }
    }

    //50
    for (int i = n-1; i >= 0; i--) {
        if (s[i] == '0') {
            for (int j = i-1; j >= 0; j--) {

                if (s[j] == '5') {
                    ans = min(ans, (i-j-1) + (n-i-1));
                    break;
                }
            }
        }
    }

    //25
    for (int i = n-1; i >= 0; i--) {
        if (s[i] == '5') {
            for (int j = i-1; j >= 0; j--) {

                if (s[j] == '2') {
                    ans = min(ans, (i-j-1) + (n-i-1));
                    break;
                }
            }
        }
    }

    //75
    for (int i = n-1; i >= 0; i--) {
        if (s[i] == '5') {
            for (int j = i-1; j >= 0; j--) {

                if (s[j] == '7') {
                    ans = min(ans, (i-j-1) + (n-i-1));
                    break;
                }
            }
        }
    }
    cout << ans << endl;
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
