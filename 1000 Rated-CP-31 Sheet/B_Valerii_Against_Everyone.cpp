#include<bits/stdc++.h>

using namespace std;

#define ll unsigned long long int
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
    map<int, int>mp;
    bool flag = false;

    fr(0, n) {
        cin >> vec[i];
        mp[vec[i]]++;
    }

    for(auto [a,b] : mp) {
        if(b >=2 ){
            yes;
            return;
        }
    }
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
