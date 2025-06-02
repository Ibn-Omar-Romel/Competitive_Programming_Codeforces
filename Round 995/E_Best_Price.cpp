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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }   

    vector<pair<int,int>> vec;
    for (int i = 0; i < n; i++) {

        if (b[i] > a[i])
            vec.push_back({b[i], a[i]});
    }
    sort(vec.rbegin(), vec.rend());

    

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    ll sum = 0;
    int i = 0;
    while(k--) {
        
        sum += vec[i].first;
        mp[vec[i].second]--;
        if (mp[vec[i].second] == 0) {
            mp.erase(vec[i].second);
        }
        i++;
        if (i == vec.size()) {
            break;
        }
    }

    for (auto it : mp) {
        sum += it.first;
    }
    cout << sum << endl;
}



// void solve() {

//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n), b(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> b[i];
//     } 

//     vector<pair<int,int>> vec;
//     for (int i = 0; i < n; i++) {

//         //if (b[i] > a[i])
//             vec.push_back({b[i], a[i]});
//     }

//     sort(b.begin(), b.end());
//     map<int, int> mp;
//     int temp = n;
//     for (int i = n-1; i >= 0; i--) {

//         if (mp.find(b[i]) == mp.end()) {
//             mp[b[i]] = temp-i+1;
//         }
//         else {
//             if (mp[b[i]] > temp) {
//                 mp[b[i]] = temp-i+1;
//             }
//         }
//         temp--;
//     }

//     bool flag = false;
//     ll value = 0;
//     for (auto it : mp) {
//         if (it.second <= k) {
//             flag = true;
//             value = it.first;
//         }
//     }

//     cout << "value : "  << value << endl;

//     ll sum = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] <= value || b[i] <= value) {
//             sum += max(a[i], b[i]);
//         }
//         else {
//             sum += a[i];
//         }
//     }
//     cout << sum << endl;

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
