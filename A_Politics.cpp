#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector
#define st string

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]



#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n , m ;
        cin >> n >> m ;

        char arra[n][m];

        int count = 0 , ans = 1;

        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                cin >> arra[i][j];
            }
        }

        for ( int i = 1 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                if( arra[0][j] == arra[i][j] ) count++;
            }
            if ( count == m ) ans++;
            count = 0 ;
        
        }
        cout << ans << endl;
    }

    return 0;
}
