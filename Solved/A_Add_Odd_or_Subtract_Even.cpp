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

        int a, b;
        cin >> a >> b;

        if( a == b )
            cout << "0\n";
        else if ( a % 2 == 0 and b % 2 == 0){

            if ( a > b ) cout << "1\n";
            else cout << "2\n";
        }
        else if ( a % 2 != 0 and b % 2 != 0){

            if ( a > b ) cout << "1\n";
            else cout << "2\n";
        }
        else if( (a % 2 == 0 and b % 2 != 0) || (a % 2 != 0 and b % 2 == 0) ){

            if ( b > a ) cout << "1\n";
            else cout << "2\n";
        }
    }
    return 0;
}

