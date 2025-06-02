#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size, k;
        cin >> size >> k;

        vector < int > vec(size);

        for ( int i = 0 ; i < size ; i++ ) {
            cin >> vec[i];
        }
        sort ( vec.begin(), vec.end());

        ll high = 1e10;
        ll low = 0;
        ll height = 0;

        while( low < high - 1 ) {

            ll sum = 0 ;
            height = low + (high-low)/ 2;

            for ( int i = 0 ; i < size ; i++ ) {

                if( vec[i] < height ) {

                    sum += (height - vec[i]);
                }
            }
            if( sum <= k ) low = height;
            else  high = height;
        }
        cout << low << endl;
    }
    return 0;
}
