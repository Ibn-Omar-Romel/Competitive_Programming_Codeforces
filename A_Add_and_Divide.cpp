#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

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

        ll a, b;
        cin >> a >> b;

        if ( a < b )
            cout << 1 << endl;
        else if ( a == b ) 
            cout << 2 << endl;

        else {

            int count = 0;
            while ( true ) {

                int value1 = floor( (double) a / (double)(b+1));
                int value2 = floor( (double) a / (double)(b));

                if ( value1 > value2 ) {
                    b++;
                    count++;
                }
                else {
                    break;
                }
            }

            while( a > 0 ) {

                a /= b;
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}
