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

int main () {

    int t;
    cin >> t;

    while( t-- ) {

        ll n , i , j , k ;
        cin >> n ;
        
        cin >> k ;
        ll keep = n, v ;

        for ( i = 2 ; i <= n ; i++ ) {

            if ( n % i == 0 ) {
                
                v=i;
                break;
            }
        }

        k--;
        n+=v;
        n += ( 2 * k ) ;

        cout << n << '\n';

    }
            
    return 0;
}