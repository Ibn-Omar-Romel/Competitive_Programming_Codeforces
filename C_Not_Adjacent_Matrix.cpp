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

        if ( n == 1 ) cout << 1 << endl;
        else if ( n == 2 ) cout << -1 << endl;

        else {

            int num = 1;
            int arra[n][n];
            for ( int i = 0 ; i < n ; i++ ) {

                for ( int j = 0 ; j < n ; j++ ) {

                    arra[i][j] = num;
                    num++;
                }
            }

            for ( int i = 0 ; i < n ; i++ ) {

                for ( int j = 0 ; j < n ; j++) {

                    if( i != n-1 and j % 2 != 0 ) {
                        swap(arra[i][j],arra[i+1][j]);
                    }

                    cout << arra[i][j] << " ";     
                }
                nl;
            }
            nl;
        }
        
    }
    return 0;
}
