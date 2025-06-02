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
 
        int A, B, n;
        cin >> A >> B >> n;

        vector < pair < int, int > > mons(n);

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> mons[i].first;
        }

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> mons[i].second;
        }

        sort( mons.begin(), mons.end() );

        int flag = 0 ;

        for ( int i = 0 ; i < n ; i++ ) {

            if ( B <= 0 ) {
                flag = 1;
                break;
            }

            int value1 = ceil( (double)mons[i].second / (double)A );
            int value2 = ceil( (double)B / (double)mons[i].first );

            int value = min( value1, value2);

            B = B - ( mons[i].first * value );
            mons[i].second = mons[i].second - ( A * value );
        }

        if ( flag == 1 or  mons[n-1].second > 0 ) no;
        else yes;
    }
    return 0;
}
