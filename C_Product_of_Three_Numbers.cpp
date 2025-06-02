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

        int n;
        cin >> n;

        int a = 0 , b = 0;

        for( int i = 2; i*i <= n ; i++ ) {

            if ( n % i == 0 ) {
                a = i;
                n /= i;
                break;
            }
        }
        for( int i = 2; i*i <= n ; i++ ) {

            if ( n % i == 0 and a != i ) {
                b = i;
                n /= i;
                break;
            }
        }

        if ( n == 1 or a == 0 or b == 0 or a == b or b == n ) 
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << a << " " << b << " " << n << endl;
        }
    }
    return 0;
}
