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


// void solve() {

//     string s;
//     cin >> s;

//     int f = 0, n = 0, t = 0;

//     string st = "";
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] == 'F') {
//             f++;
//         }
//         else if (s[i] == 'T') {
//             t++;
//         }
//         else if (s[i] == 'N') {
//             n++;
//         }
//         else {
//             st.push_back(s[i]);
//         }
//     }

//     if (f > 0) {
//         st.push_back('F');
//         f--;
//     }
//     for (int i = 0; i < t; i++) {
//         st.push_back('T');
//     }
//     for (int i = 0; i < n; i++) {
//         st.push_back('N');
//     }
//     for (int i = 0; i < f; i++) {
//         st.push_back('F');
//     }

//     cout << st << endl;
// }

void solve() {

    string s;
    cin >> s;

    string st = "";
    for (int i = 0 ; i < s.size(); i++) {
        if (s[i] == 'T')
            st.push_back('T');
    }
    for (int i = 0 ; i < s.size(); i++) {
        if (s[i] != 'T')
            st.push_back(s[i]);
    }

    cout << st << endl;
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
