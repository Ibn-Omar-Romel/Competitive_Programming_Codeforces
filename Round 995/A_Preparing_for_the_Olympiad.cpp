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
    vector<int> vm(n), vs(n);
    for (int i = 0; i < n; i++) {
        cin >> vm[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> vs[i];
    }

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++) {
        
        int m = vm[i];  
        int s = (i + 1 < n) ? vs[i + 1] : 0;

        if (m > s) {
            sum1 += m;
            sum2 += s;
        } 
    }
    cout << sum1 - sum2 << endl;
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
