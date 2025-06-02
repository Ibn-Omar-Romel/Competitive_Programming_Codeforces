#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        int arra[size];

        fr(0,size) {

            cin >> arra[i];
        }

        asort;

        int flag = 0;

        int g = gcd(arra[0], arra[1]);

        for ( int i = 0 ; i < size-1 ; i++ ) {

            for ( int j = i+1 ; j < size ; j++ ) {

                if( gcd(arra[i],arra[j]) <= 2 ) {
                    flag = 1;
                    break;
                }
            }
            if ( flag == 1 ) break;
            
        }


        flag?yes:no;
    }
    return 0;
}


