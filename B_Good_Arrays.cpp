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

        ll sum = 0, count = 0;
        for ( int i = 0 ; i < size; i++ ) {
            int x;
            cin >> x;

            sum += x;
            if ( x == 1 )
                count++;
        }

        if ( size > 1 and sum >= count + size )
            yes;
        else 
            no; 
    }
    return 0;
}
