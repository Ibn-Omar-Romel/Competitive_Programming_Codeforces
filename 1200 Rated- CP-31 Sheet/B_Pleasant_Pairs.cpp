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
    
    vector<ll>vec(n+1);
    for (int i = 1; i <= n; i++) {
      cin >> vec[i];
    }

    ll count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = vec[i]-i; j <= n; j += vec[i]) {

            if (j >= 0)  {

                if (i < j && vec[i] * vec[j] == i + j) {
                    count++;
                }
                
            }
        }
    }
    cout << count << endl;
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
