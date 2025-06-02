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

        int n;
        cin >> n;

        int arra[n];
        
        int zero = 0;

        int product = 1;


        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra[i];

            if ( zero == 0 and arra[i] == 0 ) {

                zero++;
                arra[i] = 1;
            }
            else if ( zero != 0 and arra[i] == 0 ) {

                product = 0;
                zero = 2;
            }

            product *= arra[i];
        }

        if ( zero == 2 ) {

            cout << 0 << '\n';
        }
        else {

                sort ( arra, arra + n );

            product = product / arra[0];

            if ( zero == 0 )
                product = product * ( arra[0] + 1 ) ;

            cout << product << '\n';
        }
    }
    return 0;
}
