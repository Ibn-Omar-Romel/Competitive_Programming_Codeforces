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
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    vector<pair<ll, ll>> vec;

    fr(0,n)
        cin >> a[i];
    
    fr(0,n)
        cin >> b[i];

    fr (0,n) {
        if (a[i] > b[i]) {
            swap(a[i], b[i]);
            vec.push_back({3, i + 1});
        }
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j + 1 < n; j++) {

            if (a[j] > a[j + 1]) {
                
                swap(a[j], a[j + 1]);
                vec.push_back({1, j + 1});
            }
        }
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j + 1 < n; j++) {

            if (b[j] > b[j + 1]) {

                swap(b[j], b[j + 1]);
                
                vec.push_back({2, j + 1});
            }
        }
    }

    cout << vec.size() <<  endl;

    for (auto it : vec) {
        cout << it.first << " " << it.second << endl;
    }
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
