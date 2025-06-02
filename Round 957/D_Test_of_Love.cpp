#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
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
        
        int n, m, k;
        cin >> n >> m >> k;

        string s;
        cin >> s;

        int i = m - 1;
        int lost = 0;
        int fail = 0;

        for ( int j = 0 ; j < s.size() ; j++, i-- ) {

            if( s[j] == 'L' ) {
                i = m;
            }
            else if ( s[j] == 'W' and i <= 0 ) {
                
                lost++;
            }
            else if ( i <= 0 ) {
                fail++;
            }
        }
        
        if(lost > k) fail++;

        if ( fail != 0 )
            no;
        else    
            yes;    
    }
    return 0;
}
