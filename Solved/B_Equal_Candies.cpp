#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        int min = INT_MAX;

        int arra[size] ;

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];
            if( arra[i] < min ) min = arra[i];
        }

        long long int count = 0 ;
        for ( int i = 0 ; i < size ; i++ ) {

            count = count + arra[i] - min ;
        }
        cout << count << '\n';
    }
}

