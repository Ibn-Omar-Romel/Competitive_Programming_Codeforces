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

        int n, m;
        cin >> n >> m;

        char arra[n][m];
        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                cin >> arra[i][j];
            }
        }
        // for ( int i = 0 ; i < n ; i++ ) {

        //     for ( int j = 0 ; j < m ; j++ ) {

        //         cout<< arra[i][j];
        //     }
        //     cout << endl;
        // }
        // cout << endl;


        int lx = 0, ly = 0, hx = 0, hy = 0;
        int flag = 0;

        int maxHas = 0;
        int count = 0;
        int prev = 0;

        int ansx = 0 , ansy = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < m ; j++ ) {

                if ( flag == 0 and arra[i][j] == '#') {
                    flag = 1;

                    lx = i;
                    hx = i;

                    ly = j;
                    hy = j;

                    count++;
                }
                else if ( flag == 1 and arra[i][j] == '#') {
                    count++;

                    hx = i;
                    hy = j;
                }
            }

            if ( maxHas < prev )
                break;
            else if ( lx == hx ){
                maxHas = max(maxHas, count);
                ansx = lx;
                ansy = ly;
            }
            else{

                maxHas = max(maxHas, count);
                ansx = (hx+lx)/2;
                ansy = ly;
            }
        }

        cout << ansx+1 << " " << ansy+1 << endl;


    }
    return 0;
}
