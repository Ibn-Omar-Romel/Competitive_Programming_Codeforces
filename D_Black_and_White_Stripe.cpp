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

    // while ( t-- ) {

    //     int n, k;
    //     cin >> n >> k;

    //     string s;
    //     cin >> s;

    //     int w = 0, b = 0;
    //     int i = 0 , j = 0 ;
    //     int count = n;

    //     while( j < n ) {

    //         if ( s[j] == 'W' ) {
    //             w++;
    //         }

    //         b++;
    //         if ( b == k ) {
    //             count = min(count, w);
    //             if ( s[i] == 'W' ) {
    //                 w--;
    //             }
    //             i++,b--;
    //         }
    //         j++;
    //     }
    //     cout << count << endl;
    // }



    //better approach: 
    while ( t-- ) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
    
        int ans = n, cnt = 0;

        for( int i = 0; i < k; i++ )
            if ( s[i] == 'W' )
                cnt++;

        ans = min( cnt, ans );
        int i = 0, j = k;

        while ( j < n ) {

            if ( s[j] == 'W' ) cnt++;
            if ( s[i] == 'W' ) cnt--;

            i++, j++;
            ans = min( ans, cnt );
        }
        cout << ans << '\n';
    }
    return 0;
}
