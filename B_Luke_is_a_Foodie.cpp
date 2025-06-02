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

        int n, x;
        cin >> n >> x;

        vector<int>vec(n);
        for( int i = 0; i < n ; i++ ) {
            cin >> vec[i];
        }

        int mi = vec[0], ma = vec[0];
        int count = 0;

        for ( int i = 0; i < n; i++ ) {

            mi = min(mi, vec[i]);
            ma = max(ma, vec[i]);

            if ( ma-x > mi+x ) {
                count++;
                mi = vec[i];
                ma = vec[i];
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
