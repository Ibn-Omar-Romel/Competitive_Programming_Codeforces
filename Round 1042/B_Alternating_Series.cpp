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

    if (n == 2) {
        cout << -1 << " " << 2 << endl;
    }

    else if (n % 2) {

        fr(0, n) {

            if (i % 2 == 0) {
                cout << -1 << " ";
            }
            else {
                cout << 3 << " ";
            }
        }
        cout << endl;
    }
    else {
        fr(0,n-2) {
            
            if (i % 2) {
                cout << 3 << " ";
            }
            else {
                cout << -1 << " ";
            }
        }
       cout << -1 << " " << 2 << endl;
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
