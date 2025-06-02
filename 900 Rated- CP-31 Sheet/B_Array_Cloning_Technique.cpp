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
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int all = count(vec.begin(), vec.end(), vec[0]);
    if (all == n || n == 1) {
        cout << 0 << endl;
        return;
    }
    
    int maxelement = 1, count = 1;
    vsort;
    for (int i = 1; i < n; i++) {
        if (vec[i] == vec[i - 1]) {
            count++;
        }
        else {
            maxelement = max(maxelement, count);
            count = 1;
        }
    }
    maxelement = max(maxelement, count);

    int a = maxelement, b = n - maxelement;
    int total = 0;

    while (b > 0) {
        total++;     
        int copied = min(a, b); 
        b -= copied;
        total += copied; 
        a += copied;
    }

    cout << total << endl;
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
