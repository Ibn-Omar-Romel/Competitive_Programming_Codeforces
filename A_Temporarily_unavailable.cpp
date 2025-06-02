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

    int t;

    cin >> t ;

    while(t--) {

        int a, b, c, r, t ;
        cin >> a >> b >> c >> r ;

        if( a > b )
            swap( a, b);


        int value1 = min( b, c+r );
        int value2 = max( a, c-r );

        cout << b - a - max( ( value1 - value2 ), 0 ) << '\n' ;
    }
    return 0;
}
