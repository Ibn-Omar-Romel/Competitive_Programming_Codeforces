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

    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 2 << endl;
    }
    else if ( a < b) {
        cout << 1 << endl;
    }
    else {

        int operations = INT_MAX;
        for (int i = 0; i <= 40; i++) {
            int bb = b + i;

            if (bb == 1)
                continue;
                
            int count = i;
            int n = a;

            while(n > 0) {
                n /= bb;
                count++;
            }
            operations = min(operations, count);
        }
        cout << operations << endl;
        
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
