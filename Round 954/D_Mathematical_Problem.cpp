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
        
        int n ;
        cin >> n;

        string s;
        cin >> s;

        if ( n == 1 ) {
            cout << s << endl;
            continue;
        }
        else if ( n == 2 ) {

            if ( s[0] != '0' ) {
                cout << s << endl;
            }
            else{
                cout << s[1] << endl;
            }
            continue;
        }
        else if ( n == 3 ) {

            int value1 = 
        }

        int zero = count( s.begin(), s.end(), '0');

        if ( zero >= 1 ) {
            cout << 0 << endl;
        }
        else {
            ok;
        }
        
    }
    return 0;
}
