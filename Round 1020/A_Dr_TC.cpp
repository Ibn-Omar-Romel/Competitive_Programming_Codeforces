#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort(veca, veca+size)
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 

void solve() {

    int n;
    cin >> n;

    string vec;
    cin >> vec;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(vec[i] == '1') {
            ans++;
        }
    }

    int total = 0;

    for (int i = 0; i < n; i++) {

        if(vec[i] == '0') {
            total += (ans+1);
        }
        else {
            total += (ans - 1);
        }
        //cout << vec[i] << " " << total << endl;
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
