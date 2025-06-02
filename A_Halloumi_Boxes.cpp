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

        int size, k;
        cin >> size >> k;

        int flag = 0;
        int arra[size];

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];

            if ( i > 0 and  arra[i] < arra[i-1]) flag++;
        }

        if ( k == 1 and flag >= 1 and size != 1 ) no;
        else yes;
        
    }
    return 0;
}
