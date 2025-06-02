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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        ll n;
        cin >> n;

        if( n <= 0 )
            n = (-1) * n ;

        if( n == 0 ) cout << "0\n";
        else if( n == 1) cout << "2\n";
        else if( n % 3 == 0 ) cout << n / 3 << '\n';
        else{
            
            int value1 = n / 2;
            int value2 = (n / 3) + 1 ;

            cout << min( value1, value2 ) << '\n';
        }
    }
    return 0;
}
