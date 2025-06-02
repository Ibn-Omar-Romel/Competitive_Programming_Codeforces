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

    ll t;
    cin>>t;

    while(t--) {

        ll m, n, d, ans, a;

        cin >> n ;
        ans = n * ( n + 1 ) / 2 ;

        a = 1 ;
        while( a <= n ) {

            ans -= 2 * a ;
            a = a * 2 ;
        }

        cout << ans << '\n' ;
    }
        return 0;

}