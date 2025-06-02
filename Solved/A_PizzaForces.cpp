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

        ll n;
        cin >> n;

        ll value = n / 6;
        ll rem = n % 6;

        if( n <= 6 ) cout << "15\n";
        
        else if( rem <= 0 ) cout << value * 15 << '\n';

        else if ( rem <= 2 ) cout << ( value * 15 ) + 5 << '\n';

        else if ( rem <= 4 ) cout << ( value * 15 ) + 10 << '\n';

        else cout << ( value + 1 ) * 15 << '\n';
    }
    return 0;
}
