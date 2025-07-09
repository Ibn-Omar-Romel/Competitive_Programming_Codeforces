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
//     ll value = 0;

//     int mx = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> vec[i][j];
//             mx = max(mx, vec[i][j]);
//         }
//     }

//     map<int, int>row, col;
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (vec[i][j] == mx) {
//                 row[i]++;
//                 col[j]++;
//             }
//         }
//     }

//     //check if row ok
//     bool flag = false;
//     set<int>row_st;
//     for (auto it : row) {
//         if (it.second > 1) { // multiple value in a row
//             if (flag == false) // first multiple row
//                 flag = true;
//             else {
//                 cout << mx << endl;
//                 return;
//             }
//         }
//         else {
//             row_st.insert(it.first);
//         }
//     }

//     for (auto i : row_st) {

//         int count = 0;
//         for(int j = 0; j < m; j++) {
//             if (vec[i][j] == mx and count == 0) {
//                 count++;
//             }
//             else {
//                 cout << mx << endl;
//                 return;
//             }
//         }
//     }


//     //check if column ok
//     flag = false;
//     set<int>col_st;
//     for (auto it : col) {
//         if (it.second > 1) { // multiple value in a row
//             if (flag == false) // first multiple row
//                 flag = true;
//             else {
//                 cout << mx << endl;
//                 return;
//             }
//         }
//         else {
//             col_st.insert(it.first);
//         }
//     }

//     for (auto i : col_st) {

//         int count = 0;
//         for(int j = 0; j < n; j++) {
//             if (vec[j][i] == mx and count == 0) {
//                 count++;
//             }
//             else {
//                 cout << mx << endl;
//                 return;
//             }
//         }
//     }

//     cout << mx-1 << endl;    
// }







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
