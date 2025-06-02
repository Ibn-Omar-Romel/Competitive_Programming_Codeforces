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

        int l,r;
        cin >> l >> r;

        int Max = 0;

        if ( l == r ) cout << "0\n";
        else {

            if( r % 2 != 0 ) {

                Max = r / 2;
                if( Max < l ) {

                    cout << r % l << '\n';
                }
                else{
                    cout << Max << '\n';
                }
        
            }
            else {

                Max = (( r / 2 ) + 1) ;
                if( Max < l ) Max = l;
                cout << max( r % Max, r % l) << '\n';
            }
        }
    }
    return 0;
}
