#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define vec vector
#define st string

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]





#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        int a[size];
        int b[size];

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> a[i];
        }
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> b[i];
        }

        int flag =  0;
        int zero = -1;
        int dif = -1;

        for ( int i = 0 ; i < size ; i++ ) {

            if( b[i] > a[i] ){
                flag = 1;
                break;
            }
            
            if ( b[i] != 0 ) {

                if ( dif == -1 ){
                    dif = a[i] - b[i];
                }
                else if( dif != (a[i] - b[i]) ) {
                    flag = 1;
                    break;
                }
            }
            else {
                zero = max ( zero, a[i]-b[i] );
            }
        }


        if( flag == 1 ) {
            no;
            continue;
        }

        ( dif == -1 or zero <= dif )? yes:no;
    }
    return 0;
}
