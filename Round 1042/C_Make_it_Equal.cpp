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

    ll n, k;
    cin >> n >> k;

    vector<int>vecs(n), vect(n);
    fr(0,n){
        cin >> vecs[i];
    }
    fr(0,n) {
        cin >> vect[i];

    }

    if (k == 0) {
        
        sort(vecs.begin(), vecs.end());
        sort(vect.begin(), vect.end());

        if (vecs == vect) {
            yes;
        }
        else {
            no;
        }
    }

    unordered_map<ll, ll>mp;

    for (int i = 0; i < n; i++) {



        ll value = vecs[i] % k;
        if (value < 0) {
            value += k;
        }

        value = min(value, k - value);
        mp[value]++;



        value = vect[i] % k;
        if (value < 0) {
            value += k;
        }

        value = min(value, k - value);
        mp[value]--;
    }


    for (auto it : mp) {
        if (it.second != 0) {
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
