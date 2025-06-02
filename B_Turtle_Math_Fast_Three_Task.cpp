#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;

        ll sum = 0;
        int a = 0;
        int two = 0, one = 0;
        for ( int i = 0 ; i < n ; i++ ) {

            cin >> a;
            sum += a;
            
            if ( a % 3 == 2 ) two = 1;
            else if ( a % 3 == 1 ) one = 1;
        }

        if ( sum % 3 == 0 ) cout << 0 << endl;
        else if ( sum % 3 == 2 or (one == 1) ) cout << 1 << endl;
        else cout << 2 << endl;
        
        
    }
    return 0;
}
