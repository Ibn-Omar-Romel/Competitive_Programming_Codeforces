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

        string s;
        cin >> s;

        int zeros = count(s.begin(), s.end(), '0');
        int ones = count(s.begin(), s.end(), '1');

        if ( zeros == ones ) cout << 0 << endl;
        else if ( ones == 0 || zeros == 0 ) cout << ones + zeros << endl;
        else {

            for ( int i = 0 ; i < s.size() ; i++ ) {

                if ( s[i] == '0' ) {
                    if ( ones > 0 ) ones--;
                    else break;
                }
                else if ( s[i] == '1' ) {
                    if ( zeros > 0 ) zeros--;
                    else break;
                }
            }
            
            cout << zeros + ones << endl;
        }
    }
    return 0;
}
