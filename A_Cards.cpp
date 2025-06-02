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

    int size;
    cin >> size;

    string s;
    cin >> s;

    int z = 0 , e = 0, r = 0 , o = 0 , n = 0 ;

    for ( int i = 0 ; i < size ; i++ ) {

        if ( s[i] == 'z' ) z++;
        else if ( s[i] == 'e' ) e++;
        else if ( s[i] == 'r' ) r++;
        else if ( s[i] == 'o' ) o++;
        else if ( s[i] == 'n' ) n++;
    }

    int ones = min ( o, min ( n, e ));

    for ( int i = 0 ; i < ones ; i++ ) {

        cout << 1 << " ";
    }
    o = o - ones;
    n = n - ones;
    e = e - ones;

    int zeros = min( z, min( e, min( r, o )));

    for ( int i = 0 ; i < zeros ; i++ ) {

        cout << 0 << " ";
    }
    cout << '\n';

    return 0;
}
