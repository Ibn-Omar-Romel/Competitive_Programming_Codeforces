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

    set<int>st;
    st.insert(vec[0]);
    int index = 0, ans = 1;
    for (int i = 1; i < n; i++) {
        if (st.find(vec[i]) != st.end())
            st.erase(vec[i]);
        
        
        if (st.empty()) {
            ans++;

            for (int j = index+1; j <= i; j++) {
                st.insert(vec[j]);
            }
            index++;
        }
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
