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
    int n, x;
    cin >> n >> x;

    bool flag = false;
    int start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a == 1) {
            if (!flag) {
                start = i;
                flag = true;
            }
            end = i;
        }
    }

    int value = end - start + 1;
    if (value <= x)
        yes;
    else 
        no;
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
