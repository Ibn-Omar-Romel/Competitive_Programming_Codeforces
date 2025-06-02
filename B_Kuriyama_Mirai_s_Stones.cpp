#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size;
    cin >> size;

    int arra[size];
    ll nsum[size];
    ll ssum[size];

    ll sum = 0;
    for ( int i = 0 ; i < size ; i++ ) {

        cin >> arra[i];
        sum += arra[i];

        if ( i > 0 ) nsum[i] = sum;
    }
    nsum[0] = arra[0];

    sort( arra, arra+ size);

    ssum[0] = arra[0];
    sum = arra[0];
    for ( int i = 1 ; i < size ; i++ ) {

        sum += arra[i];
        ssum[i] = sum;
    }

    int m;
    cin >> m;

    while( m-- ) {

        int type , l , r;
        cin >> type >> l >> r;

        ll result = (type == 1) ? nsum[r-1] - ((l > 1) ? nsum[l-2] : 0) : ssum[r-1] - ((l > 1) ? ssum[l-2] : 0);
        cout << result << endl;

        // if ( type == 1 ) {

        //     if ( l == 1 ) cout << nsum[r-1] << endl;
        //     else {
        //         cout << nsum[r-1]  - nsum[l-2] << endl;
        //     }
        // }
        // else {
        //     if ( l == 1 ) cout << ssum[r-1] << endl;
        //     else {
        //         cout << ssum[r-1]  - ssum[l-2] << endl;
        //     }
        // }
    }
    
    return 0;
}
