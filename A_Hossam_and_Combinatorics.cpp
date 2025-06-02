#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector
#define st string

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]


#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        vector < ll > vec(size);
        //ll same = 1;
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> vec[i];
            //if ( i > 0 and vec[i] == vec[i-1] ) same++;
        }
        sort ( vec.begin(), vec.end() );

        ll mini = 1;
        ll maxi = 1;

        for ( int i = 1 ; i < size ; i++ ) {

            if ( vec[i] != vec[i-1] ) break;
            else mini++;
        }

        for ( int i = size - 1  ; i > 0 ; i-- ) {

            if ( vec[i] != vec[i-1] ) break;
            else maxi++;
        }

        // it works
        if( same == size ) {
            //ll value = ( (size ) * ( size - 1 ) ) / 2;
            ll value = 0 , temp = size-1;
            for ( int i = size ; temp != 0 ; i-- ) {
                value += temp;
                temp--;
            }
            cout << value + value << endl;
        }
        else cout << mini * maxi * 2 << endl;

        // if ( vec[0] == vec[size-1] ) cout << size * ( size - 1 ) << endl;
        // else cout << mini * maxi * 2 << endl;
        
    }
    return 0;
}
