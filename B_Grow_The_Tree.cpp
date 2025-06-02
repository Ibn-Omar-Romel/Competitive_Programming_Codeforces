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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    ll arra[size];

    for ( int i = 0 ; i < size ; i++ ) {

        cin >> arra[i];
    }

    sort( arra , arra + size ) ;
    ll x = 0 , y = 0 ;

    int flag = 0;

    for ( int i = size - 1, j = 0 ; i >= j  ;  ) {

        if ( flag == 0 ) {

            x += arra[i];
            flag = 1;
            i--;
        }

        else {

            y += arra[j];
            flag = 0;
            j++;
        }
    }

    ll ans = ( x * x ) + ( y * y );

    cout << ans << '\n';

    return 0;
}
