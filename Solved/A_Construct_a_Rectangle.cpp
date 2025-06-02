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

        int arra[3];
        cin >> arra[0] >> arra[1] >> arra[2];

        sort ( arra, arra + 3 );

        if( arra[0] + arra[1] == arra[2] ) {

            cout << "YES\n";
        }
        else if( ( arra[0] == arra[1] and arra[2] % 2 == 0 ) || ( arra[0] == arra[2] and arra[1] % 2 == 0 ) || ( arra[2] == arra[1] and arra[0] % 2 == 0 )) {

            cout << "YES\n";
        }
        else {

            cout << "NO\n";
        }


    }
    return 0;
}
