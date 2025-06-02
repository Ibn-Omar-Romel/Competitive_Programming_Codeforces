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

        int a, b , c;
        cin >> a >> b >> c ;

        if ( a == b ) cout << 0 << endl;
        else {

            float dif = abs(a - b) ;
            dif = dif / 2;
            int ans = 0 ;
            ans = dif / c ;
            if (dif - (int(dif / c) * c) > 0) ans++;
            cout << ans << endl;

            // value = dif - (int(dif / c) * c);
            // cout << value << endl;
        } 
    }
    return 0;
}
