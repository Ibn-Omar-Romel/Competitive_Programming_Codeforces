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

        vector < int > vec(3);
        cin >> vec[0] >> vec[1] >> vec[2];

        vsort;


        if ( vec[0] == vec[1] and vec[1] == vec[2] ) yes;
        else if ( vec[1] % vec[0] != 0 || vec[2] % vec[0] != 0 ) no;
        else {
            int flag = 0;
            int count = 0;

            while ( vec[1] != vec[0] ) {

                if ( count > 3 or vec[1] % vec[0] != 0 ) {
                    flag = 1;
                    break;
                }

                count++;
                vec[1] -= vec[0];
            }
            while ( vec[2] != vec[0] ) {

                if ( count > 3 or vec[2] % vec[0] != 0 ) {
                    flag = 1;
                    break;
                }

                count++;
                vec[2] -= vec[0];
            }

            if ( flag == 1 or count > 3) no;
            else yes;
        }
    }
    return 0;
}
