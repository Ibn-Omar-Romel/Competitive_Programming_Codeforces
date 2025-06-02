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

        ll count = 1, cube = 0 , square = 0;
        
        ll i = 2;

        while( true ) {

            ll value1 = pow(i,2);
            ll value2 = pow(i,3);

            if( value1 <= n and square == 0) count++;
            else square = 1;

            if( value2 <= n and cube == 0) count++;
            else cube = 1;

            if( pow( i,6) <= n ) count--;

            if( cube == 1 and square == 1)
                break;
            
            i++;
        }

        cout << count << '\n';
    }
    return 0;
}
