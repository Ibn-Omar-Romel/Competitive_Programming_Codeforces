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

    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    vector<int> vec(n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        if (mp.find(k-vec[i]) != mp.end()) {
            count++;
            mp[k-vec[i]]--;
            if (mp[k-vec[i]] == 0) {
                mp.erase(k-vec[i]);
            } 
        }
        else {
            mp[vec[i]]++;
        }
    }

    cout << count << endl;
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
