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

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    set<int> st;
    vector<int> b(k);
    
    for (int i = 0; i < k; i++) {
        int q;
        cin >> q;
        st.insert(q);
        b[i] = q;
    }

    string s;
    for (int i = 0; i < m; i++) {
        
        if (st.size() - st.count(a[i]) == n - 1) {
            s.push_back('1'); 
        } else {
            s.push_back('0'); 
        }
    }

    cout << s << endl;
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
