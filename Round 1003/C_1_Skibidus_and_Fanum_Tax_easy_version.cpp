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

    int n, m;
    cin >> n >> m;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int a;
    cin >> a;


    int lastValue = INT_MIN;
    

    for (int i = 0; i < n; i++) {

        if (vec[i] >= lastValue || a - vec[i] >= lastValue) {

            if (vec[i] >= lastValue and a - vec[i] >= lastValue) {
                lastValue = min(vec[i], a - vec[i]);
            }
            else if (vec[i] >= lastValue) {
                lastValue = vec[i];
            }
            else {
                lastValue = a - vec[i];
            }
        }
        else {
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
