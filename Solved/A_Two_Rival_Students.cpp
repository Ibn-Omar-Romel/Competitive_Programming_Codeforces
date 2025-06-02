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

        int n , x, a, b;
        cin >> n >> x >> a >> b ;

        int value = abs ( a - b);
        if( value  == n - 1 ) cout << n - 1 << '\n';
        else if( x == 0 ) cout << value << '\n';

        else {

            if( value + x >= n ) cout << n - 1 << '\n';
            else cout << value + x << '\n';
        }
    }
    return 0;
}
