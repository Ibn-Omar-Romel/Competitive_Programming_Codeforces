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

        int n, k, q;
        cin >> n >> k >> q;

        ll count = 0;
        ll times = 0;
        vector<int>vec(n);

        for ( int i = 0 ; i < n ; i++ ) {
            cin >> vec[i];

            if ( vec[i] <= q and k >= 1 )
                count++;
        }
        if ( count == 0 )
            cout << 0 << endl;
        else {
            
            count = 0;

            for (int i = 0; i < n; ++i) {
                if (vec[i] <= q) {
                    ++count;
                    if (count >= k) {
                        times += (count - k + 1);
                    }
                } else {
                    count = 0;
                }
            }
            cout << times << endl;
        }
    }
    return 0;
}
