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

    string s;
    cin >> s;

    set<int>st1;
    set<int>st2;

    vector<int>vec1(n), vec2(n+1);
    
    for (int i = 0, j = n-1; i < n, j >= 0; i++, j--) {

        st1.insert(s[i]);
        vec1[i] = st1.size();

        st2.insert(s[j]);
        vec2[j] = st2.size();
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(vec1[i]+vec2[i+1], ans);
    }
    cout << ans << endl;
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
