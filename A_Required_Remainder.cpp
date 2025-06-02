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

    int t;
    cin >> t;

    while( t-- ) {

        int x, y, n;

        cin >> x >> y >> n;

        
        if ( n % x == y ) cout << n << '\n';

        else {

            int value = n % x , ans = 0;

            if( value > y ) 
                ans =  n - ( value - y ) ;
            else 
                ans =  n - ( value + ( x - y )) ;
            
            cout << ans << '\n';
        }
    }
    return 0;
}
