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

    int n, k;
    cin >> n >> k;

    int  arr[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
    }

    if ( k > n ) cout << -1 << endl;
    else {
        sort(arr,arr+n);
        cout << arr[n-k] << " " << arr[n-k] << endl;
    }
        
    return 0;
}
