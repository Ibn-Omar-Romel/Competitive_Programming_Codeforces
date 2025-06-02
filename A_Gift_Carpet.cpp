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

        int n, m;
        cin >> n >> m;

        char arra[n][m];

        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                cin >> arra[i][j];
            }
        }

        string check = "vika";
        int flag = 0;
        int k = 0;

        for ( int i = 0; i < m; i++ ) {

            for ( int j = 0 ; j < n ; j++ ) {

                if ( arra[j][i] == check[k] ) {
                    k++;

                    if ( k == 4 ) {
                        flag = 1;
                        break;
                    }
                    break;
                }
            }
            if ( flag == 1 ) break;
        }
        flag? yes:no;
    }
    return 0;
}
