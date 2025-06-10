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

        ll n;
        cin >> n;

        ll ma = 0 , mi = 0;

        if ( n % 2 != 0 or n < 4 ) cout << -1 << endl;
        else{

            n = n / 2;
            mi = ceil((double)n / (double)3);
            ma = n / 2 ;
            cout << mi << " " << ma << endl ;
        }
    }
    return 0;
}