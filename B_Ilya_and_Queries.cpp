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


    string s;
    cin >> s;

    vector < int > vec(s.size( )+1, 0 );
    ll sum = 0;
    for ( int i = 0 ; i < s.size()-1 ; i++ ) {

        if  ( s[i] == s[i+1] ) {
            sum++;
        }
        vec[i+1] = sum;
    }

    int m;
    cin >> m;

    while( m-- ) {

        int l , r ;
        cin >> l >> r ;

        cout << vec[r-1] - vec[l-1] << endl;
    }
    return 0;
}
