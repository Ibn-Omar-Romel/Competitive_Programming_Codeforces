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

        int r,c;
        cin >> r >> c;

        ll sum = 0;

        int arra[r][c];
        int neg = 0;

        int mn = INT_MAX;

        for ( int i = 0 ; i < r ; i++ ) {

            for ( int j = 0 ; j < c ; j++ ) {

                cin >> arra[i][j];
                sum += abs(arra[i][j]);

                if ( arra[i][j] < 0 ) {
                    neg++;
                }
                mn = min(mn,abs(arra[i][j]));
            }
        }

        if ( neg % 2 == 0 ) {
            cout << sum << endl;
        }
        else {
            cout << sum - (2*mn) << endl;
        }

        
    }
    return 0;
}
