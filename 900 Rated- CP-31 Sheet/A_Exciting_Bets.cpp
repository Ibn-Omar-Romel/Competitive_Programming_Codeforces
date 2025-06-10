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

        ll a, b;
        cin >> a >> b;

        if( a == b ) {

            cout << "0 0\n";
        }
        else {

            if ( a > b ) swap ( a , b ); 

            ll ans = b - a;

            ll x = a % ans;
            ll y = ans - x;

            cout << ans << " " << min( x, y ) << '\n';
        }
    }
    return 0;
}