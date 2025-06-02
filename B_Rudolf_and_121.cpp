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
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        int arra[size];


        for ( int i = 0 ; i < size ; i++ ) {

            ain;
        }


                int count = 0, flag = 2;
            for ( int i = 1 ; i < size - 1 ;  ) {

                if ( arra[i-1] == 0 ) i++;
                else if ( arra[i] > 1 ) {

                    flag = 0;

                    arra[i-1]--;
                    arra[i] -= 2;
                    arra[i+1]--; 

                    
                    // cout << i << endl;
                    // cout << arra[i-1] << " " << arra[i] << " " << arra[i+1] << endl;
                    // nl; 

                    
                    if ( arra[i-1] < 0 or arra[i+1] < 0 or (arra[i-1] == arra[i] and arra[i-1] > 0 ) or ( arra[i] == 0 and arra[i+1] > 0 )) {
                        flag = 1;
                        break;
                    }
                    else if ( arra[i] == 1 or arra[i-1] == 0 ) i++;
                }
                else i++;
            }

            // for ( int i = 0 ; i < size ; i++ ) {

            //     if ( arra[i] != 0 ) {
            //         flag = 1;
            //         break;
            //     }
            // }
            if ( flag == 0 ) yes;
            else no; 
        
    }
    return 0;
}
