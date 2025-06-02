#include<bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        long long int n, m;
        cin >> n >> m;

        if( n == 0 and m != 0 ) cout << "1\n";
        else if( n != 0 and m == 0 ) cout << n + 1 << '\n';
        else if( n == m ) cout << n + ( m * 2 ) + 1 << '\n';
        // else if ( n > m ) cout <<  ( m + 1 ) + ( m * 2 ) << '\n';
        else {
            cout << n + ( m * 2 ) + 1 << '\n';
        }

    }
    return 0;
}