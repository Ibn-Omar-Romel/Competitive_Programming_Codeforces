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

        string s;
        cin >> s;

        if ( s.size() == count(s.begin(), s.end(), s[0]) )  no;
        else{
            yes;
            for( int i = 0 ; i < s.size()-1; i++ ) {
                if ( s[i] != s[i+1] ) {
                    swap(s[i], s[i+1]);
                    break;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}
