#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
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

        vector<int>v(n);
        for( int i = 0 ; i < n ; i++ ) {

            cin >> v[i];
        }

        int count = 0;
        // sort(v.begin(), v.end());
        for ( int i = 0 ; i < n-3 ; ++i ) {
            int change = 0;
            if ( v[i] != v[i+1] ) change++;
            if ( v[i+1] != v[i+2] ) change++;
            if ( v[i+2] != v[i+3] ) change++;
            
            if ( change == 1 )
                count++;
        }
        cout << count << endl;
        
    }
    return 0;
}
