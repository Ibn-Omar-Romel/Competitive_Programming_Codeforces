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

        long long int x, y, a, b;
        cin >> x >> y >> a >> b ;

        long long int value = y - x;

        if( value > a and value > b ) {

            if( value % ( a + b ) == 0 ) 
                cout << value / ( a + b ) << '\n';

            else 
                cout << "-1\n";
        }
        else{
            cout << "-1\n";
        }
    }

    return 0;
}

