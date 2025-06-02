#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;

        ll ans = n / 3;

        if ( n % 3 == 0 ) cout << ans << " " << ans << endl;
        else if ( n % 3 == 1 ) cout << ans + 1 << " " << ans << endl;
        else cout << ans << " " << ans + 1 << endl;

        // ll ans = n / 3;
        // ll ans1 = ans;

        // if ( n % 3 == 1 ) ans++;
        // else if ( n % 3 == 2 ) ans1++;

        // cout << ans << " " << ans1 << endl;
    }
    return 0;
}
