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

        map< char, int > m;

        for ( int i = 0 ; i < 3 ; i++ ) {

            for ( int j = 0 ; j < 3 ; j++ ) {

                char a;
                cin >> a;

                m[a]++;

            }
        }

        char ch ;


        for ( auto pr : m ) {

            if ( pr.second == 2 and (pr.first == 'A' || pr.first == 'B' || pr.first == 'C')){
                ch = pr.first;
                break;
            }
        }

        cout << ch << endl;

        
        
    }
    return 0;
}
