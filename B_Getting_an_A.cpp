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

    int n;
    cin >> n;

    int arra[n], sum = 0 ;

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> arra[i];
        sum = sum + arra[i];
    }

    int needed =  round( (4.5 * (float)n) - (float)sum ) ;

    int changes = 0 ;

    if( needed <= 0 ) {

        cout << "0\n";
        return 0;
    }

    sort ( arra, arra+n);

    for ( int i = 0 ; i < n ; i++ ) {

        if( arra[i] < 5 ) {

            int value = 5 - arra[i];

            

            needed = needed - value;
            changes++;

            if( needed <= 0 ){
                break;
            }
        }
    }

    cout << changes << '\n';
    return 0;
}
