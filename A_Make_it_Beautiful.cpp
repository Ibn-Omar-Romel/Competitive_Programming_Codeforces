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

        int size;
        cin >> size;

        int arra[size];

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i] ;
            
        }
        sort( arra, arra+size);

        if ( arra[0] == arra[size-1]) no;
        else {
            yes;
            cout << arra[size-1] << " " << arra[0] << " ";

            fr ( 1,size-1) {

                cout << arra[i] << " ";
            }
            nl;
        }
        
    }
    return 0;
}
