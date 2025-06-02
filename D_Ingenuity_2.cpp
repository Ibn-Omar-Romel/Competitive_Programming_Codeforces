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

        string st;
        cin >> st;

        

        int n = 0, s = 0, e = 0, w = 0;

        for ( int i = 0 ; i < size ; i++ ) {
            
            if ( st[i] == 'N' ) 
                n++;

            else if ( st[i] == 'S' ) 
                s++;

            else if ( st[i] == 'W' ) 
                w++;

            else if ( st[i] == 'e' ) 
                e++;
        }

        if ( (n+s) % 2 == 0 and (w+e) % 2 == 0 )
            yes;
        else no;
    }
    return 0;
}
