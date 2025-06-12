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

//     int n, k;
//     cin >> n >> k;

//     int o = k, z = n-k;
    
//     string s = "";
//     if (o >= 1) {
//         s.push_back('1');
//         o--;
//     }
//     if (z > 1) {
//         while(z > 1) {
//             s.push_back('0');
//             z--;
//         }
//     }
//     if(o >= 1) {
//         while(o > 0) {
//             s.push_back('1');
//             o--;
//         }
//     }

//     if (z == 1)
//         s.push_back('0');

//     cout << s << endl;
// }

void solve() {
    int n, k;
    cin >> n >> k;

    string st = "";
    int z = n -k;
    while(k--)
        st.push_back('1');
    while(z--)
        st.push_back('0');
    
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
