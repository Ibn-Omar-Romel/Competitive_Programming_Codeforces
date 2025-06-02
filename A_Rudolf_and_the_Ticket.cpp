#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n, m, k;
        cin >> n >> m >> k;

        int arra1[n];
        int arra2[m];

        int count = 0;

        for( int i = 0 ; i < n ; i++ ) {

            cin >> arra1[i];
        }

        for ( int i = 0 ; i < m ; i++ ) {

            cin >> arra2[i];
        }

        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                if ( arra1[i] + arra2[j] <= k ) count++;
            }
        }

        cout << count << endl;

        
    }
    return 0;
}
