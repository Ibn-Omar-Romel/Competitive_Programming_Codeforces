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

//     int n ;
//     cin >> n;

//     vector<int>vec(n);
//     for ( int i = 0 ; i < n ; i++ ) {
//         cin >> vec[i];
//     }

//     vector<int>freq(n+1, 0);
//     freq[0] = 1;

//     int occ = 0;
//     int flag = 0;
//     for ( int i = 0 ; i < n; i++ ) {

//         if ( occ == 0 ) {
//             freq[vec[i]]++;
//             occ = 1;
//         }
//         else if ( vec[i] == 1 ) {
//             if ( freq[2] == 1 ){
//                 freq[vec[i]]++;
//             }
//             else{
//                 flag = 1;
//                 break;
//             }
//         }
//         else if ( vec[i] == n ){
//             if ( freq[n-1] == 1 ){
//                 freq[vec[i]]++;
//             }
//             else{
//                 flag = 1;
//                 break;
//             }
//         }
//         else {
//             if ( freq[vec[i]+1] == 1 or freq[vec[i]-1] == 1){
//                 freq[vec[i]]++;
//             }
//             else{

//                 flag = 1;
//                 break;
//             }
//         }
//     }
    
//     flag == 0 ? yes:no;
// }


void solve() {
    
    int n;
    cin >> n;

    unordered_set<int>st;
    bool flag = true;

    for (int i = 0; i < n; i++) {

        int x; cin >> x;

        if (!st.empty() and st.find(x-1) != st.end() and st.find(x+1) != st.end()) {
            flag = false;
        }
        st.insert(x);
    }

    flag? yes:no;
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
