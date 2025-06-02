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
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size, k;
        cin >> size >> k;

        if ( k == 0 ) {

            for ( int i = size ; i > 0 ; i-- ) {

                cout << i << " ";
            }
            cout << endl;
        }
        else if ( size - 1 == k ) {

            for ( int i = 1 ; i <= size ; i++ ) {

                cout << i << " ";
            }
            cout << endl;
        }
        else {

            cout << "1 ";
            int first = size - k + 1;
            for ( int i = first ; i <= size ; i++ ) {

                cout << i << " ";
            }
            for ( int i = first - 1 ; i > 1 ; i-- ) {

                cout << i << " ";
            }
            cout << endl; 
        }
        
    }
    return 0;
}
