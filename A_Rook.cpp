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

        char ch = 'a';

        for ( int i = 0 ; i <= 7 ; i++ ) {
            
            string st = to_string(i+1);
            if (st[0] != s[1]) {
                cout << s[0] << st << endl; 
            }
            if ( ch != s[0] ) {
                cout << ch << s[1] << endl;
                
            } 
            ch++;
        }
    }
    return 0;
}
