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

        
        int size;
        cin >> size;

        string s;
        cin >> s;

        int ans = 0 ;

        for ( int i = 0 ; i < size ; i++ ) {

            if ( size - i >= 3 and s[i] == '.' and s[i+1] == '.' and s[i+2] == '.') {
                ans = 2;
                break;
            }
            else if ( s[i] == '.' ) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
