#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while( t-- ) {

        string s;
        cin >> s;

        int A = 0 , B = 0 , C = 0 ;

        for ( int i = 0 ; i < s.size() ; i++ ) {

            if( s[i] == 'A' ) A++;
            else if( s[i] == 'B' ) B++;
            else C++;
        }

        if( B == A + C ) {

            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}