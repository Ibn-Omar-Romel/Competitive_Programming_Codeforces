#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

#define fr(a, b) for(int i = a; i < b; i++) 

// void solve() {

//     ll n, k, b, s;
//     cin >> n >> k >> b >> s;

//     if (s == 0) {
//         while(n--) {
//             cout << 0 << " ";
//         }
//         cout << endl;
//         return;
//     }
//     else if (k == b) {
//         n -= 1;
//         while(n--) {
//             cout << 0 << " ";
//         }
//         cout << s << endl;
//         return;
//     }

//     ll value = k * b;
//     //cout << value << endl;

//     if (value < s) {

//         ll extra = s - value;

//         if (n == 1) { // no extra moves
//             cout << -1 << endl;
//             return;
//         }
        
//         ll extraMoves = extra / (k-1);
//         //cout << extra << " " << extraMoves << endl;
//         if (extraMoves + 1 > n) {
//             cout << -1 << endl;
//             return;
//         }

//         ll rest = n - (extraMoves + 1);
//         while(rest--) {
//             cout << 0 << " ";
//         }
//         ll temp = extraMoves;
//         while(temp--) {
//             cout << k-1 << " ";
//         }
//         cout << value + (extra - (extraMoves *(k-1))) << endl;
//     }
//     else if (value > s) {
//         cout << -1 << endl;
//         return;
//     }
// }


void solve() {

    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    ll minimum_sum = k * b;
    ll maximum_sum = (k * b) + (k-1) * n;

    if (s < minimum_sum || s > maximum_sum) {
        cout << -1 << endl;
        return;
    }
    
    vector<ll>vec(n, 0);
    vec[0] = minimum_sum;
    s -= minimum_sum;

    for (int i = 0; i < n; i++) {
        
        ll value = min(k-1, s);
        vec[i] += value;
        s -= value;
    }

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
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
