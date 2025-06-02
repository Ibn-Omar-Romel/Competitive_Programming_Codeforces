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
#define SA sort( arra, arra + n ) ;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , q;
    cin >> n >> q;

    int arra[n];
    ll sum[n];
    ll s = 0 ;


    for ( int i = 0 ; i < n ; i++) {

        cin >> arra[i];
    }

    SA;

    for ( int i = n - 1, j = 0 ; i >= 0 ; i-- , j++) {
        
        s = s + arra[i];
        sum[j] = s;
    }


    while ( q-- ) {

        int x, y;
        cin >> x >> y;

        if ( x == y ) cout << sum[ x - 1 ] << '\n'; 

        else cout << sum[ x - 1 ] - sum[ x - y - 1 ] << '\n'; 
    }
    return 0;
}
