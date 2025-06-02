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

        char arra[3][3];

        for ( int i = 0 ; i < 3 ; i++ ) {

            for ( int j = 0 ; j < 3 ; j++ ) {

                cin >> arra[i][j];
            }
        }   

        char ch = 0;
        char found = 0;

        if ( arra[0][0] == arra[0][1] and arra[0][1] == arra[0][2]  and arra[0][0] != '.' ) {
            ch = arra[0][0];
            found = 1;
        }
        if ( arra[1][0] == arra[1][1] and arra[1][1] == arra[1][2] and arra[1][0] != '.' ){
            ch = arra[1][0];
            found = 1;
        }
        if ( arra[2][0] == arra[2][1] and arra[2][1] == arra[2][2] and arra[2][0] != '.' ){
            ch = arra[2][0];
            found = 1;
        }
        if ( arra[0][0] == arra[1][0] and arra[1][0] == arra[2][0] and arra[0][0] != '.' ){
            ch = arra[0][0];
            found = 1;
        }
        if ( arra[0][1] == arra[1][1] and arra[1][1] == arra[2][1] and arra[0][1] != '.' ){
            ch = arra[0][1];
            found = 1;
        }
        if ( arra[0][2] == arra[1][2] and arra[1][2] == arra[2][2] and arra[0][2] != '.' ){
            ch = arra[0][2];
            found = 1;
        }
        if ( arra[0][0] == arra[1][1] and arra[1][1] == arra[2][2] and arra[0][0] != '.' ){
            ch = arra[0][0];
            found = 1;
        }
        if ( arra[0][2] == arra[1][1] and arra[1][1] == arra[2][0] and arra[0][2] != '.' ){
            ch = arra[0][2];
            found = 1;
        }

        if ( found == 1 ) cout << ch << endl;
        else cout << "DRAW" << endl;  
    }
    return 0;
}
