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

//     int n, m, i, j;
//     cin >> n >> m >> i >> j;

//     vector<pair<int, pair<int,int>>> vec;

//     vec.push_back({abs(i-1) + abs(j-1), {1,1}});
//     vec.push_back({abs(i-1) + abs(m-j), {1,m}});
//     vec.push_back({abs(n-i) + abs(j-1), {n,1}});
//     vec.push_back({abs(n-i) + abs(m-j), {n,m}});

//     vsort;
//     cout << vec[0].second.first << " " << vec[0].second.second << " ";
//     cout << vec[1].second.first << " " << vec[1].second.second << endl;
// }

void solve() {

    int n, m, i, j;
    cin >> n >> m >> i >> j;

    cout << 1 << " " << 1 << " " << n << " " << m << endl; 
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
