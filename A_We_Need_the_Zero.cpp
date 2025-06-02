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

        vector < int > vec(size);

        int value = 0 ;
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> vec[i];

            value = vec[i] ^ value;
        }

        if ( size % 2 != 0 ) cout << value << endl;
        else if ( size % 2 == 0 and value == 0 ) cout << 0 << endl;
        else cout << -1 << endl;
    }
    return 0;
}
