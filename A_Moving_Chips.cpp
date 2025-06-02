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

        vector < int > a(n);

        for ( int i = 0 ; i < n ; i++ ) cin >> a[i];

        bool flag = false;
        bool zero = false;

        int count = 0;
        int ans = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            if ( a[i] == 1 and flag == false ) flag = true;
            else if ( a[i] == 0 and flag == true ) {
                count ++;
                zero = true;
            }
            else if ( a[i] == 1 and flag == true and zero == true) {
                flag = true;
                zero = false;
                ans += count;
                count = 0;
            }
        }

        cout << ans << endl;
        
    }
    return 0;
}
