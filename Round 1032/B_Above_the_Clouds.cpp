#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
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

    for (int i = 1; i < n - 1; i++) {
        
        string a = s.substr(0, i);
        string b = s.substr(i, 1);
        string c = s.substr(i + 1);

        string st = a + c;

        if (st.find(b) != string::npos) {
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
