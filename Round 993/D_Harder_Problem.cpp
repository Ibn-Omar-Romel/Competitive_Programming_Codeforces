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

    vector<int> a(n);
    set<int> s, st;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(i+1);
    }

    for (int i = 0 ; i < n; i++) {
        if (st.find(a[i]) == st.end()) {
            cout << a[i] << " ";
            st.insert(a[i]);
            s.erase(a[i]);
        }
        else {
            int x = *s.begin();
            cout << x << " ";
            s.erase(x);
            st.insert(x);
        }
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
