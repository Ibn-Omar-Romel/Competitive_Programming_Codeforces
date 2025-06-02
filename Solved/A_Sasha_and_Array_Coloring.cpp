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

        int size ;
        cin >> size ;
        vec < int > v;
        for ( int i = 0 ; i < size ; i++ ) {

            int a ;
            cin >> a;

            v.push_back( a );
        }

        sort ( v.begin(), v.end() ) ;

        int cost = 0;

        for ( int i = 0, j = size - 1  ; i < size / 2 ; i++ , j-- ) {

            cost = cost + ( v[j] - v[i] );
        }
        
        cout << cost << '\n';
    }
    return 0;
}
