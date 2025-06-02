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

    int n;
    cin >> n;
    string s;
    cin >> s;

    ll l = 0, o = 0;

    fr(0,n) {

        if ( s[i] == 'L') l++;
        else o++;
    }

    if ( n == 1 ) cout << -1 << endl;
    else if ( n == 2 and l == o ) cout << 1 << endl;
    else {
        
        // int count = 0, count1 = 0;
        // for ( int i = 0 ; i < n ; i++ ) {

        //     if ( s[i] == s[0] ) count++;
        //     else break;
        // }
        
        // for ( int i = n-1 ; i >= 0 ; i-- ) {

        //     if ( s[i] == s[n-1] ) count1++;
        //     else break;
        // }

        // cout << count << " " << o << endl;
        // cout << count1 + count << endl;
        // if ( count == l and count1+count == n) cout << count << endl;
        // else if ( count == o and count1+count == n) cout << count << endl;
        // else cout << -1 << endl;

        int ans = 0, LL = 0 , OO = 0;
        int flag = 0;
        for ( int i = 0 ; i < n ; i++ ) {
    
            if ( s[i] == 'L' and l != 0) {
                // l -= 1;
                LL++;
            }
            else if ( s[i] == 'O' and o != 0 ) {
                // o -= 1;
                OO++;
            }

            if (  l-LL != LL and o-OO != OO ) {
                ans = i+1;
                flag = 1;
                break;
            }
        }
        if ( flag == 1 and ans != n ) cout << ans << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}
