#include<bits/stdc++.h>
#include<unordered_set>


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

        vector<int> vec(n);
        for ( int i = 0 ; i < n ; i++ ) {
            cin  >> vec[i];
        }

    
        int count = 0;
        ll sum = 0;
        int m = LLONG_MIN;
        for ( int i = 0 ; i < n ; i++ ) {

            sum += vec[i];
            m = max(m,vec[i]);

            if ( sum - m == m) 
                count++;
        }

        cout << count << endl;

    }
    return 0;
}
