#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


long long int factorial( long long n ) {

    if ( n <= 1 ) 
        return 1;

    return n * factorial(n - 1);
}

long long int nCr( long n, long r ) {

    return factorial(n) / (factorial(r) * factorial(n - r));
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        map<int,int> mp;

        long long ans = 0;
        int a;
        for ( int i = 1 ; i <= size ; i++ ) {

            cin >> a;
            a -= i;
            ans += mp[a];
            mp[a]++;
        }

        cout << ans << endl;

        // Different Approach
        // ll m = 0;
        // for ( auto &it : mp ) {

        //     if ( it.second > 1 ) {

        //         ll r = it.second-1;


                
        //         m += (r*(r+1)) / 2 ;
        //     }
        // }
        // cout << m << endl;
    }
    return 0;
}
