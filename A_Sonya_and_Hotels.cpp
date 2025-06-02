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

    int size, d ;
    cin >> size >> d;

    int hotels = 2 ;

    vector < int > vec(size);
    for ( int i = 0 ; i < size ; i++ ) {

        cin >> vec[i];

        if ( i > 0 ) {

            int value = vec[i] - vec[i-1];

            if ( d * 2 == value  ) hotels++ ;
            else if ( value > 2 * d ) hotels += 2 ;
        }
    }

    cout << hotels << endl;

    

    return 0;
}
