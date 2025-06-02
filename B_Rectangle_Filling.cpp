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

        int r, c;
        cin >> r >> c;

        char arra[r][c];

        for ( int i = 0 ; i < r ; i++ ) {

            for ( int j = 0 ; j < c ;  j++ ) {
                cin >> arra[i][j];
            }
        }
        
        if ( r == 1 and c == 1 ) {
            cout << "YES" << endl;
        }
        else if ( c == 1 and arra[0][0] == arra[r-1][0]) {
            cout << "YES" << endl;
        }
        else if ( r == 1 and arra[0][0] == arra[0][c-1]) {
            cout << "YES" << endl;
        }
        else if ( arra[0][0] == arra[r-1][c-1] ) {
            cout << "YES" << endl;
        }
        else if (arra[0][c-1] == arra[r-1][0]) {
            cout << "YES" << endl;
        }            
        else {
            
            int w1 = 0, w2 = 0, w3 = 0, w4= 0;
            int b1 = 0, b2 = 0, b3 = 0, b4= 0;

            for ( int i = 0 ; i < c ; i++ ) {

                if ( arra[0][i] == 'W' ) w1++;
                else b1++;

                if ( arra[r-1][i] == 'W') w3++;
                else b3++;
            }

            for ( int i = 0 ; i < r ; i++ ) {

                if ( arra[i][0] == 'W' ) w4++;
                else b4++;

                if ( arra[i][c-1] == 'W') w2++;
                else b2++;
            }
            
            if ( w1 > 0 and w2 > 0 and w3 > 0 and w4 > 0 )
                yes;
            else if ( b1 > 0 and b2 > 0 and b3 > 0 and  b4 > 0 )
                yes;
            else 
                no;
            
        }
    }
    return 0;
}
