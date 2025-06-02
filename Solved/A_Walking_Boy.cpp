// I wish I could leave you my love but my heart is a mess.

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

        int n;
        cin >> n; 

        int arra[n+2];
        arra[0] = 0;
        arra[n+1] = 1440;

        int walk = 0;

        for ( int i = 1 ; i <= n  ; i++ ) {

            cin >> arra[i];
        }

        for ( int i = 1 ; i <= n+1 ; i++ ) {

            if( arra[i] - arra[i-1] >= 240 ) {

                walk = walk + 2;
                break;
            }
            else if( arra[i] - arra[i-1] >= 120 ) {

                walk = walk + 1;
            }
        }

        if( walk >= 2 ) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}