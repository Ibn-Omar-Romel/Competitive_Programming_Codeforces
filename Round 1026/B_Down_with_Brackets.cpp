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

    int count = 0, total = 0;
    for (int i = 0 ; i < s.size(); i++) {

        if (s[i] == '(') {
            total++;
        } else if (s[i] == ')') {
           total--;
        }

        if (total == 0) {
            count++;
        }
    }

    if (count >= 2) {
        yes;
    } else {
        no;
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
