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

        int x , y;
        cin >> x >> y;

        int value = ceil( double(y) / 2.0 );
        int have = (value * 15) - (y * 4);

        // cout << value << " " << have << endl;
        if ( have >= x )
            cout << value << endl;
        else {
            x -= have;
            value += ceil( double(x) / 15.0 );
            cout << value << endl;
        }
        
    }
    return 0;
}
