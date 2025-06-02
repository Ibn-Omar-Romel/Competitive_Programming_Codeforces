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

        int n, m;
        cin >> n >> m;

        int arra[n][n];

        for ( int i = 0 ; i < m ; i++ ){
            int x, y;
            cin >> x >> y;
        }

        if( m < n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}