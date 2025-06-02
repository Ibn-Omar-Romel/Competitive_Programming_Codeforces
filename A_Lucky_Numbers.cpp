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

        int ans = 0;
        int dif = 0;

        if ( r - l < 100 ) {

            while (l <= r) {

                int s = 10;
                int b = 0;
                int temp = l;

                while( temp > 0 ){
                    int rem = temp % 10;
                    if ( rem > b ) b = rem;
                    if ( rem < s ) s = rem ;
                    temp /= 10;
                }
                if ( b - s >= dif ) {
                    ans = l;
                    dif = b - s;
                }
                l++;
            }
            cout << ans << endl;
        }
        else {
            int ans = (l / 100) * 100 + 90;
            if (ans < l) {
                ans += 100;
            }
            cout << ans << endl;
        }
    }

    return 0;
}
