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
        
        
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int>vec(n);
        int diff = n - m;
        
        for ( int i = 0 ; i < diff ; i++ ) {
            cout << n - i << " ";
        }
    
        for ( int i = diff ; i < n ; i++ ) {
            cout << i - (diff) + 1 << " ";
        }
        
        cout << "\n";
        
    }
    return 0;
}
