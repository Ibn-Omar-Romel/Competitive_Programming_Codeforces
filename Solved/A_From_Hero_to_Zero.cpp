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

        ll n, k;
        cin >> n >> k;

        ll count = 0 ;

        while( n != 0 ) {

            if ( n % k != 0 ) {

                count = count + ( n % k );
                n = n - ( n % k);
            }
            else {

                count++;
                n = n / k ;
            }

            if( n == 0 ) {
                break;
            }
        }

        cout << count << '\n';
    }
    return 0;
}
