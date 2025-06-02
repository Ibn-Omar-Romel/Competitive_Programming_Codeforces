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


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        
        int n, k;
        cin >> n >> k;

        vector<int>vec(k);

        int ones = 0;

        ll sum = 0;

        for ( int i = 0 ; i < k ; i++ ) {
            cin >> vec[i];
            if ( vec[i] == 1)
                ones++;
        }

        sort( vec.begin(), vec.end());

        if ( vec[k-1] == 1 ) {
            cout << k - 1 << endl;
        }
        else {
            for ( int i = 0 ; i < k-1 ; i++ ) {

                if ( vec[i] != 1 ) {
                    ones += vec[i];
                    sum += (vec[i]-1);
                }
            }
            cout << sum + ones << endl;
        }
    
    }
    return 0;
}
