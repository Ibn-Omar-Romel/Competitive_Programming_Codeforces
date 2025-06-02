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

    int n;
    cin >> n;

    int arra[n+1];
    arra[0] = -1;

    for ( int i = 1 ; i <= n ; i++ ) {

        cin >> arra[i];
    }

    sort ( arra , arra + n + 1 );

    // for ( int i = 0 ; i <= n ; i++ ) {

    //     cout << arra[i] << " ";
    // }
    // cout << '\n';

    int count = 0 , max = 1, maxcount = 1 ;

    for ( int i = 1 ; i <= n ; i++ ) {

        if ( arra[i] != arra[i-1] ) {

            count ++ ;

            if ( max < maxcount ) {

                max = maxcount;
                maxcount = 1;                
            }
            else {
                maxcount = 1;
            }

        }
        else {

            maxcount ++;
            //cout << maxcount << " " << arra[i] << '\n';
        }
        
    }
    //cout << '\n';

    if ( max < maxcount ) max = maxcount ;

    cout << max << " " << count << '\n';

    return 0;
}
