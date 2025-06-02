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

        int a, b;
        cin >> a >> b;

        int value = abs( a - b );

        int count = 0 ;
        int rem = 0 ;

        if( value % 5 == 0 ) {

            cout << value / 5 << '\n';
        }
        else{

            count = count + ( value / 5 );
            rem = value % 5;

            if( rem % 2 == 0 ) {

                cout << count + (rem / 2 ) << '\n';
            }
            else {

                cout <<  count + (rem / 2) + 1 << '\n';
            }
        }

    }
    return 0;
}
