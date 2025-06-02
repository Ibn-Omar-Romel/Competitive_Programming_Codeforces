#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;

        int max = 0, index = 0 , so = 0;
        int arra[n];

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra[i];

            if ( arra[i] > max ) {
                max  = arra[i];
            }
            if ( i > 0 and arra[i] >= arra[i-1] ) so++;
        }
        if ( arra[0] <= arra[1] ) so++;

        if ( so == n ) cout << 0 << endl;
        else if ( arra[n-1] != max ) cout << max << endl;
        else  {

            max = 0;
            for ( int i = n - 1 ; i > 0 ; i-- ) {

                if ( arra[i-1] > arra[i] and max < arra[i-1] ) max = arra[i-1];
            }
            cout << max << endl;
        }
        
    }
    return 0;
}
