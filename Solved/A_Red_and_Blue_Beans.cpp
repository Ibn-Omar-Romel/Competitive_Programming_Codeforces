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

        long long int r, b, d;
        cin >> r >> b >> d;
        if( r != b and d == 0 ) cout << "NO\n";

        else if( r == b and d == 0 ) cout << "YES\n";

        // else if( abs (r-b) <= d) cout << "YES\n";

        else{

            if( r > b ) swap ( r, b);
            
            b = b - (r *(1+d));

            if(b > 0) cout << "NO\n";
            else cout << "YES\n";
        }
    }

    
    return 0;
}

