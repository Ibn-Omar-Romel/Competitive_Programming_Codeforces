#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"

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

        sort( s.begin(), s.end());

        int flag = 1;
        for ( int i = 0 ; i < s.size()-1 ; i++ ) {

            if ( s[i+1] - s[i] != 1 ) {

                flag = 0;
                break;
            }
        } 

        flag? yes:no;
    }
    return 0;
}
