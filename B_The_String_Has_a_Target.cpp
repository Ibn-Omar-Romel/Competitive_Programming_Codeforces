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

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;
        
        string s ;
        cin >> s;

        int index = 0;
        char ch = 'z';

        //char ch = *min( s.begin(), s.end() );

        for ( int i = 1 ; i < size ; i++) {

            if ( s[i] <= ch and s[0] >= s[i] ) {
               index = i;
               ch = s[i];
            }
        }

        if ( index == 0 ) cout << s << endl;
        else {

            for ( int i = index ; i > 0 ; i-- ) {

                swap ( s[i], s[i-1] );
            }

            cout << s << endl;
        }      
    }
    return 0;
}