#include<bits/stdc++.h>

using namespace std;

int main( ) {

    int t;
    cin >> t;

    while( t-- ) {

        int arra[3];
        cin >> arra[0] >> arra[1] >> arra[2];



            sort( arra, arra + 3 );

            if( arra[2] == arra[1] ) {
                
                cout << "YES\n";
                cout << arra[2] << " " << arra[0] << " " << arra[0] << '\n';
            }
            else{
                cout << "NO\n";
            }
        

    }

    return 0;
}