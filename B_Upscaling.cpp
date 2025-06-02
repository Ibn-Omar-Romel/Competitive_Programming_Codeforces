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

        char arra[2*n][2*n];

        int count = 0;
        char value = '#';

        for( int i = 0 ; i < 2*n; i+=2 ) {

             
            for ( int j = 0 ; j < 2*n  ; j +=2 ) {

                if ( count == 0 ) {

                    arra[i][j] = '#';
                    arra[i+1][j] = '#';
                    arra[i+1][j+1] = '#';
                    arra[i][j+1] = '#';
                    count = 1;

                } 
                else {
                    arra[i][j] = '.';
                    arra[i+1][j] = '.';
                    arra[i+1][j+1] = '.';
                    arra[i][j+1] = '.';
                    count = 0;
                }
            }

            if ( value == '#' ) {
                count = 1;
                value = '.';
            }

            else {
                count = 0;
                value = '#';
            }
        }

        for ( int i = 0 ; i < 2*n ; i++ ) {

                for ( int j = 0 ; j < 2*n; j++ ) {

                    cout << arra[i][j];
                }
                nl;
            }      
    }
    return 0;
}
