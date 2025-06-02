#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iomanip> 
#include <algorithm>
#include <utility>
#include <unordered_map>

using namespace std;

#define ll long long int
#define vec vector
#define st string
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]
#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        ll n, m , k;
        cin >> n >> m >> k;

        ll sum = 0 ;
        
        vector < int > jelly;
        vector < int > gelly;

        for ( int i = 0 ; i < n ; i++ ) {

            ll a;
            cin >> a;

            jelly.push_back( a );
        }

        for ( int i = 0 ; i < m ; i++ ) {

            ll a;
            cin >> a;

            gelly.push_back( a );
        }

        sort ( jelly.begin(), jelly.end());
        sort ( gelly.begin(), gelly.end());

        if ( k % 2 != 0 ) {

            if ( jelly[0] < gelly[ m - 1 ] ) {

                swap ( jelly[0], gelly[ m - 1 ] );
            }
        }
        else {

            if ( jelly[0] < gelly[ m - 1 ] ) {

                swap ( jelly[0], gelly[ m - 1 ] );
                sort ( jelly.begin(), jelly.end());
                sort ( gelly.begin(), gelly.end());
            }

            if ( gelly[0] < jelly[ n - 1 ] ) {

                swap ( gelly[0], jelly[ n - 1 ] );
            }
        }


        for ( int i = 0 ; i < n ; i++ ) {

            sum += jelly[i];
        }
        cout << sum << '\n';

    }

    return 0;
}
