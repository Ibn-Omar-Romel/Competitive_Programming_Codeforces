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

        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        int value = 0;

        if( x > a ){

            value = x - a;
        }
        if( y > b) {

            value = value + y - b ;
        }

        if( value <= c ) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}
