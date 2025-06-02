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

        int ones = 0 , twos = 0 , threes = 0 , fours = 0 , fives = 0;
        for ( int i = 0 ; i < 10 ; i++ ) {

            for ( int j = 0 ; j < 10 ; j++ ) {

                char ch;
                cin >> ch;
                
                if ( ch == 'X' and ( i == 0 || i == 9 || j == 0 || j == 9 ) ) ones++;
                else if ( ch == 'X' and ( i == 1 || j  == 1 || i == 8 || j == 8 ) ) twos++;
                else if ( ch == 'X' and ( i == 2 || j == 2 || i == 7 || j == 7 ) ) threes++;
                else if ( ch == 'X' and ( i == 3 || j == 3 || i == 6 || j == 6 ) ) fours++;
                else if ( ch == 'X' and ( i == 4 || j == 4 || i == 5 || j == 5 ) ) fives++;
            }
        }

        cout << (fives * 5) + ( fours * 4) + (threes * 3) + (twos * 2) + ones  << endl;
    }
    return 0;
}
