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


bool bd( int num ) {

    while ( num > 0 ) {

        int d = num % 10;
        if ( d != 0 && d != 1 ) {
            return false; 
        }
        num /= 10;
    }
    return true;
}

bool check( int n ) {

    if ( n == 1 ) return true;
    if ( bd( n ) ) return true;

    for ( int i = 2; i * i <= n; i++ ) {

        if ( n % i == 0) {
            if ( bd(i) && check(n / i)) {
                return true;
            }
        }
    }
    return false;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;

        check(n)?yes:no;
        
    }
    return 0;
}