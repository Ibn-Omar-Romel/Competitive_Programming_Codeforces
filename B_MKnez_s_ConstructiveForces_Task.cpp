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
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;


        if ( size == 3 ) no;
        else if ( size % 2 == 0 ) {
            yes;
            while(size--) {

                if ( size % 2 == 0 ) cout << 1 << " ";
                else cout << -1 << " ";
            }
            cout << endl;
        }
        else {
            
            yes;

            int a = (-1) * ( size / 2);
            int b =  ( size / 2 ) - 1  ;

            while( size-- ) {

                if ( size % 2 == 0 ) cout << b << " ";
                else cout << a << " ";
            }
            cout << endl;
        }
        
        
    }
    return 0;
}
