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

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int> temp = vec; // contains the main array
    sort(vec.begin(), vec.end());

    
    map<int,int>mp;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += vec[i];
        mp[vec[i]] = sum;
    }

    for (int i = 0; i < n; i++) {
        auto it = upper_bound(vec.begin(), vec.end(), mp[temp[i]]);
        cout << it - vec.begin() - 1 << " ";
    }
    cout << endl;
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