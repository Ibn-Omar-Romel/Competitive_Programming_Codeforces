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

    int y = vec[0] + vec[0] - vec[1];

    if (y < 0 || y % (n+1) != 0) {
        no;
        return;
    }

    y /= (n+1);
    int x = vec[0] - (n*y);

    if (x < 0) {
        no;
        return;
    }

    for (int i = 0; i < n; i++) {

        int value = ((i+1) * x) + ((n-i) * y);
        if (value != vec[i]) {
            no;
            return;
        }
    }
    yes;

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
