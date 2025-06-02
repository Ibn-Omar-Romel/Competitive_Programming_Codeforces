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

        int n;
        cin >> n;

        int a[n];
        for ( int i = 0 ; i < n ; i++ ) {
            cin >> a[i];
        }
        sort(a, a+n);

        int index = ceil((double)n / (double)2);

        int ans = 1;
        for ( int i = index-1 ; i < n-1 ; i++ ) {

            if ( a[i] == a[i+1]) ans++;
            else break;
        }
        cout  << ans << "\n";
    }
    return 0;
}
