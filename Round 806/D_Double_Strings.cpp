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

    vector<string>vec(n);
    unordered_set<string>st;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        st.insert(vec[i]);
    }


    for (int i = 0; i < n; i++) {

        string s = vec[i];
        bool flag = false;
        for (int j = 1; j < s.size(); j++) {

            string st1 = s.substr(0,j);
            string st2 = s.substr(j);

            if (st.find(st1) != st.end() and st.find(st2) != st.end()) {
                flag = true;
                break;
            }
        }

        cout << (flag? "1" : "0");
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
