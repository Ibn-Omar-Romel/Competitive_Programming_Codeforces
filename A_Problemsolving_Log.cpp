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

        int times[26] = {0};

        int size;
        cin >> size;

        string s;
        cin >> s;

        for ( int i = 0 ; i < size ; i++ ) {

            times[s[i] - 65]++;
        }

        // cout << times[0] << endl;
        // cout << times[2] << endl;


        int problems = 0 , value = 1;

        for ( int i = 0 ; i < 26 ; i++ ) {

            if ( times[i] >= value ) problems++;

            value++;
        }

        cout << problems << endl;
        
    }
    return 0;
}
