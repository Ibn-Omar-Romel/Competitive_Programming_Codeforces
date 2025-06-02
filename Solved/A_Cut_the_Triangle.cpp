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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 ;
        cin >> x2 >> y2 ;
        cin >> x3 >> y3 ;

        int count = 0;

        if( x1 == x2 || x2 == x3 || x3 == x1 ) count++;
        if( y1 == y2 || y2 == y3 || y3 == y1 ) count++;

        if(count == 2) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}