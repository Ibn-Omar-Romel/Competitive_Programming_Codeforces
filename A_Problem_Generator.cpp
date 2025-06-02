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

        int n, m ;
        cin >> n >> m;

        string s;
        cin >> s;

        map<char, int>mp;
        vector<int>vec;
        for ( int i = 0 ; i < n; i++ ) {

            mp[s[i]]++;
        }

        int value = 0;
        string st = "ABCDEFG";

        for ( int i = 0 ; i < 7 ; i++ ) {

            auto it = mp.find(st[i]);

            if ( mp.find(st[i]) == mp.end()){
                value += m;
            }
            else if ( it->second < m ) {
                value += m - it->second;
            }
        }
        
        cout << value << endl;
    }
    return 0;
}
