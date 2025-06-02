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

        int c, d;
        cin >> c >> d;

        if ( c == 0 and d == 0) cout << "0\n";

        else if ( c == d ) cout << "1\n";

        else if ( c % 2 != 0 and d % 2 != 0 )cout << "2\n";

        else if ( c % 2 == 0 and d % 2 == 0 ) cout << "2\n";
        
        else cout << "-1\n";
        
    }
    
    return 0;
}

