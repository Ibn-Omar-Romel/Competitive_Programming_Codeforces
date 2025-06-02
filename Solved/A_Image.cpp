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

        char a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];

        sort( a , a + 4);
        
        int count = 0;
        if( a[0] != a[1] ) count++;
        if( a[1] != a[2] ) count++;
        if( a[2] != a[3] ) count++;

        cout << count << '\n';

    }
    return 0;
}
