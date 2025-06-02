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

        if ( n % 2 != 0 ) cout << 1 << endl;
        else {

            int ans = 0;
            
            for( int i = 1 ; i <= n ; i++  ) {
                if ( n % i == 0 ) {
                    ans++;
                }
                else break;
            }
            cout << ans << endl;
        }
        
    }
    return 0;
}
