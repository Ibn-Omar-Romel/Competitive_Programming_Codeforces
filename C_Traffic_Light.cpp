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

        int size;
        cin >> size;
        char ch; cin >> ch;
        string s; cin >> s;

        if ( ch == 'g' ) cout << 0 << endl;
        else {
            int flag = -1;
            int m = INT_MIN;
            int index = 0;
            int gi = 0;
            int gflag = 0;

            for ( int i = 0 ; i < s.size() ; i++ ) {

                if ( gflag == 0 and s[i] == 'g') {
                    gi = i+1;
                    gflag = 1;
                }

                if ( s[i] == ch and flag == -1) {
                    flag = 1;
                    index = i;
                } 
                else if ( s[i] == 'g' and flag == 1 ) {

                    int value = i - index;
                    m = max ( m , value );  
                    flag = -1;
                }
            }

            if ( flag == 1 ) m = max( gi + (size-1-index), m);
            cout << m << endl;
        }
    }
    return 0;
}
