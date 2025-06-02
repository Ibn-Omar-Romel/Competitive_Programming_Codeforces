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
        cin >> size ;

        int arra[size];

        int flag = 1;

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];

            if ( i > 0 and  arra[i] < arra[0]) flag = 0;
        }
        
        flag? yes:no;
    }
    return 0;
}
