#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "Yes\n"
#define no cout << "No\n"
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

        int size, n;
        cin >> size >> n;

        int odd = 0, even = 0;

        for ( int i = 0 ; i < size ; i++ ) {

            int a;
            cin >> a;

            if( a % 2 == 0 ) {
                even++;
            }
            else {
                odd++;
            }
        }

        if ( odd ==  0 ) no;
        else{
            int flag = 0;
            for ( int i = 1 ; i <= odd ; i+=2 ) {

                if ( i > n ) {

                    break;
                }
                if( (n - i ) <= even ) {
                    yes;
                    flag = 1;
                    break;
                }
            }
            if( flag == 0 ) no;
        }

    }
    return 0;
}
