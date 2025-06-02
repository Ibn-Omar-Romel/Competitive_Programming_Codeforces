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

        int n, m;
        cin >> n >> m;

        if ( m == 0 ) {
            cout << n << endl;
        }
        else {
            int count = 1;
            while( count <= n ) {
                count <<= 1;
            }
            cout << count - 1 << endl;
        }
    }
    return 0;
}
