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

        int w, d, h;
        cin >> w >> d >> h;

        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int ans1 = y1 + h + y2 + abs(x2-x1);
        int ans2 = abs(d - y1) + h + abs( d - y2) + abs ( x1 - x2 );
        int ans3 = x1 + h + x2 + abs( y2 - y1);
        int ans4 = abs(w - x1) + abs( y1 - y2 ) + abs ( w - x2) + h;

        cout << min(ans1, min( ans2 , min( ans3, ans4))) << '\n';
    }
    return 0;
}

