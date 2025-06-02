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

        int l, r;
        cin >> l >> r;
        
        int count = 0;
        int x = r;
        int p = 2;

        while( true ) {

            if ( x % p != 0 )
                x--;
            
            count++;
            x /= p;
            
            if ( x == 1 )
                break;
        }

        cout << count << endl;
    }
    return 0;
}
