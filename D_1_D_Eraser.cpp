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
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size, k;
        cin >> size >> k;

        string s;
        cin >> s;

        int op = 0 ;

        for ( int i = 0; i < size ;  ) {

            if ( s[i] == 'B' ) {

                op++;
                for ( int j = 0 ; j < k and i < size ; j++, i++ ) {

                    s[i] = 'W';
   
                }
            }
            else {
                i++;
            }
        }

        cout << op << endl;
        
    }
    return 0;
}
