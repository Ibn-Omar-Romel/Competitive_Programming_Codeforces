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

        int n, k, x;
        cin >> n >> k >> x;

        vector <ll> pre;
        ll sum = 0;

        vector < int > vec(n);
        fr (0,n)
            cin >> vec[i];
        
        sort(begin(vec), end(vec));

        
        fr(0,n) {

            sum += vec[i];
            pre.push_back(sum);
        }

        int m = INT_MIN;
        int i = n-1;
        while(k--) {

            ll v1 = pre[i-1];
            ll v2 = pre[i-1-x];

            v1 = v1 - v2;
            // cout << v1 << " " << v2 << endl;

            if ( v2 - v1 > m )
                m = v2 - v1;

            // cout << v1 << " " << v2 << " " << m <<  endl;
            i--;
        }
        cout << m << endl;
    }
    return 0;
}
