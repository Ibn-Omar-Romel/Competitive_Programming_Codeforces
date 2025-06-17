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

// Gives TLE
// void solve() {

//     int n, k;
//     cin >> n >> k;
//     vector<int>vec(n);
//     long long sum = 0;
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//         sum += vec[i];
//     }

   
//     while(sum > 0) {
//         int maxvalue = INT_MIN, index = 0;
//         for (int i = 0; i < n; i++) {
//             if (maxvalue < vec[i]) {
//                 maxvalue = vec[i];
//                 index = i;
//             }
//         }

//         if (maxvalue <= k) {
//             cout << index + 1 << " ";
//             sum -= vec[index];
//             vec[index] = 0;
//         }
//         else {
//             vec[index] -= k;
//             sum -= k;
//         } 
//     }
//     cout << endl;
// }


bool cmp(pair<ll,ll>a, pair<ll,ll>b) {
    if (a.first == b.first) {
        return (a.second < b.second); // if same energy, then the one comes earlier
    }
    return (a.first > b.first); // elemenate the bigger one
}

void solve() {

    int n, k;
    cin >> n >> k;

    vector<pair<ll,ll>>vec;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        x %= k;

        if (x == 0) {
            cout << i+1 << " ";
        }
        else {
            vec.push_back({x, i+1});
        }        
    }

    sort(vec.begin(), vec.end(), cmp);

    fr(0, vec.size()) {
        cout << vec[i].second << " ";
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
