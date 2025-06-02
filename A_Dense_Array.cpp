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

        int size;
        cin >> size;

        int arra[size];
        for( int i = 0 ; i < size ; i++ ) {
            cin >> arra[i];
        }

        int count = 0;
        for ( int i = 0 ; i < size - 1 ; i++ ) {

            int a = min(arra[i], arra[i+1]);
            int b = max(arra[i],arra[i+1]);

            if ( ceil((double)b/(double)a) > 2 ) {
                //cout << "b " << b << endl;
                
                while( ceil((double)b/(double)a) > 2 ) {

                    a = a * 2;
                    count++;
                    //cout << a << endl;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
