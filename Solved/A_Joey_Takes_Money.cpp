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
        cin >> n ;

        ll value ;
        ll arra[n];

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra[i];

            if( i > 0 ){

                value = arra[0] * arra[i];
                arra[0] = value;
                arra[i] = 1;
            }
        }

        cout << (value + n - 1) * 2022 << '\n';
    }
    return 0;
}
