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

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> vec(n, vector<int>(m));
//     int maxvalue = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> vec[i][j];

//             maxvalue = max(maxvalue, vec[i][j]);
//         }
//     }

//     bool checkflag = false, redflag = false;
//     int firstindex = -1, index = -1 ;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (vec[i][j] == maxvalue and checkflag == false) {
//                 checkflag = true;
//                 firstindex = j;
//                 break;
//             }   
//             else if (vec[i][j] == maxvalue and checkflag == true) {
//                 redflag == true;
//                 if (j != firstindex)  {
//                     cout << maxvalue;
//                     return;
//                 }     
//             }
//         }

//     }

//     bool checkflagsecond = false, redflagsecond = false;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {

//         }
//     }
    


//     if (checkflag == true and checkflagsecond == true)
//         cout << maxvalue - 1 << endl;
//     else if (checkflag == false and redflagsecond == false)
//         cout << maxvalue -1 << endl;
//     else {
//         cout << maxvalue << endl;
//     }
// }



void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<ll>> vec(n, vector<ll>(m));
    ll value = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
            
            if (value < vec[i][j])
                value = vec[i][j];
        }
    }

   
    vector<pair<ll,ll>>v;
    
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            if (vec[i][j] == value) {

                v.push_back({i, j});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        set<ll>st;
        for ( auto &it : v ) {
            if (it.first != i) {
                st.insert(it.second);
            }
        }
        if ( st.size() <= 1 ) {
            cout << value - 1 << endl;
            return;
        }
    }
    cout << value << endl;
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
