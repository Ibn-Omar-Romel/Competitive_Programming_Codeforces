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
#define strsort(s) sort(s.begin(), s.end())


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        
        int n , q;
        cin >> n >> q;

        string s1 , s2;
        cin >> s1 >> s2 ;

        // sort(s1.begin(), s1.end());
        // sort(s2.begin(), s2.end());
        strsort(s1);
        strsort(s2);

        while( q-- ) {
            int l , r;
            cin >> l >> r;

        }
    }
    return 0;
}
