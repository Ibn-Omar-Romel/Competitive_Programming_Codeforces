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

    ll n, c;
    cin >> n >> c;
    ll total = 0;

    vector<ll>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int k = 0;
    
    while(!vec.empty()){
        
        ll f = (k < 63 ? (c >> k) : 0LL);
        auto it = upper_bound(vec.begin(), vec.end(), f);

        if(it != vec.begin()){
            vec.erase(prev(it));
        } 
        else {
            total++;
            vec.pop_back();
        }
        k++;
    }

    cout << total<< "\n";
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
