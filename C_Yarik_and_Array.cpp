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

        vector < int > vec(size);

        fr( 0,size ) {
            cin >> vec[i];
        }

        int ans = INT_MIN;
        int value = 0;

        fr( 0 , size ) {
            if ( i > 0 and (abs(vec[i-1]) % 2 == abs(vec[i]) % 2 )) {
                value = vec[i];
                ans = max(ans,value);
            }
            else {
                value = max( vec[i], value + vec[i]);
                ans = max(ans,value);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
