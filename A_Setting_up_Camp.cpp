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

        int a, b, c;
        cin >> a >> b >> c;

        int flag = 0;

        int ans = a ;

        ans += ( b / 3 );

        int rem = 0;
        
        rem = b % 3 ;

        if ( rem == 1 and c < 2 ) {
            cout << -1 << endl;
        }
        else if ( rem == 2 and c < 1 ) {
            cout << -1 << endl;
        }
        else {
            if ( rem >= 1 ) ans++;
            // cout << ans << endl << endl;

            if ( rem == 1 ) c -= 2;
            else if ( rem == 2 ) c-= 1;

            ans += ( c / 3 );
            if ( c % 3 > 0 ) ans++;

            cout << ans << endl;
        }

    }
    return 0;
}
