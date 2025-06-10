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

        int n, k;
        cin >> n >> k;

        int arra[n*k];

        fr( 0 , n*k ) {

            cin >> arra[i];
        }

        if ( n == 2 ) {

            ll sum = 0;
            for ( int i = 0 ; i < n*k ; i += 2 ) {
                sum += arra[i];
            }
            cout << sum << endl;
        }
        else{

            int posi = (n+1)/ 2;
            posi = n - posi + 1;
            ll sum = 0;
            int count = 0;
            // cout << posi << endl;
            
            for (int i = (n*k)-posi ; i >= 0; i -= posi) {

                // cout << arra[i] << endl;
                sum  += arra[i];
                count++;
                if ( count == k ) break;
            }
            cout << sum << endl;
        }
        
    }
    return 0;
}