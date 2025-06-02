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


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        
        int n;
        cin >> n;
        
        vector<int>vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        int ans = vec[n-1] - vec[0];
        for (int i = 1; i < n; i++) {
            ans = max(ans, vec[i] - vec[0]);
        }
        for (int i = 0; i < n-1; i++) {
            ans = max(ans, vec[n-1] - vec[i]);
        }
        for (int i = 1; i < n; i++) {
            ans = max(ans, vec[i-1] - vec[i]);
        }
        cout << ans << endl;
        
    }
    return 0;
}
