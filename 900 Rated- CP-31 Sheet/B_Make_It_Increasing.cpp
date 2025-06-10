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

        int size;
        cin >> size;

        int arra[size];

        ll count = 0, zero = 0;

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];

            if ( i > 0 and arra[i] > arra[ i - 1 ] ) {

                count++;
            }

            if ( i > 0 and arra[i] == 0 ) {

                zero = 1;
            }
        }

        if ( size - 1 == count ) 
            cout << "0\n";

        else if ( zero == 1 ) 
            cout << "-1\n";

        else {

            count = 0 ;

            for ( int i = size - 2 ; i >= 0 ; i--) {

                while ( arra[i] >= arra[i+1] and arra[i] > 0 ) {

                    arra[i] = arra[i] / 2;
                    count++;
                }

                if ( arra[i] == arra[i+1] or arra[i] == 0 and i > 0 ) {

                    count = -1;
                    break;
                }
            }

            cout << count << '\n';
        }
    }
    return 0;
}