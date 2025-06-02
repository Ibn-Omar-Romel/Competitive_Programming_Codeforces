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

        int  n, m, k;
        cin >> n >> m >> k;
        
        set<int>s1;
        set<int>s2;

        int a;
        for ( int i = 0 ; i < n ; i++ ) {

            cin >> a;
            if ( a <= k )
                s1.insert(a);
        }
        for ( int i = 0 ; i < m ; i++ ) {

            cin >> a;
            if ( a <= k )
                s2.insert(a);
        }


        int c1 = 0, c2 = 0, c3 = 0;
        for ( int i = 1 ; i <= k ; i++ ) {

            if ( s1.find(i) != s1.end() and s2.find(i) == s2.end()) {
                c1++;
                // cout << i << " " << "c1" << endl;
            }
            else if ( s1.find(i) == s1.end() and s2.find(i) != s2.end()) {
                c2++;
                // cout << i << " " << "c2" << endl;
            }
            else if ( s1.find(i) != s1.end() and s2.find(i) != s2.end()) {
                c3++;
                // cout << i << " " << "c3" << endl;;
            }  
        }

        // cout << c1 << " " << c2 << " " << c3 << endl;

        if ( c1 > k/2 or c2 > k/2 or c1 + c2 + c3 < k ) no;
        else yes;
         
    }
    return 0;
}
