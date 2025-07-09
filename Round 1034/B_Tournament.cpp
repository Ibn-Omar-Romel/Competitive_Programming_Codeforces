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

    int n, j, k;
    cin >> n >> j >> k;

    vector<int>vec(n,0);
    int maxvalue = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        maxvalue = max(maxvalue, vec[i]);
    }

    if (k > 1)
        yes;
    else {
        if (maxvalue == vec[j-1])
            yes;
        else    
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
