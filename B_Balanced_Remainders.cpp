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
        
        int c0 = 0 , c1 = 0 , c2 = 0 ;

        for ( int i = 0 ; i < size ; i++ ) {

            int a;
            cin >> a;

            if ( a % 3 == 0 ) c0++;
            else if ( a % 3 == 1 ) c1++;
            else c2++;
        }

        
        // cout << c0 << " " << c1 << " " << c2 << endl;
        int n = size / 3;

        int ans = 0;
        
        //for 0 reminder;
        if ( c0 > n ) {
            ans += ( c0 - n );
            c1 += (c0 - n);
            
            c0 -= (c0 - n);
        }
        else if ( c0 < n ) {

            ans += ( n - c0 );
            c2 -= n - c0 ;

            c0 += (n - c0);
        }


        if ( c1 > n ) {
            ans += ( c1 - n);
            c2 += (c1 - n) ;

            c1 -= (c1 - n);
        }
        else if ( c1 < n ) {

            ans += ( n - c1 ) * 2;
            c2 -= (n - c1)  ;

            c1 += (n - c1);
        }





        cout << ans << endl;
        // cout << c0 << " " << c1 << " " << c2 << endl;



        

    
    }
    return 0;
}

