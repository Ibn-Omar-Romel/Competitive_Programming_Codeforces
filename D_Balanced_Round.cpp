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

        int size, k;
        cin >> size >> k;

        int arra[size];
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];
        }

        int count = 1, max = 1;
        sort ( arra, arra + size );

        for ( int i = 1 ; i < size ; i++ ) {

            if( arra[i] - arra[i-1] > k ) {

                if ( count > max ) {

                    max = count;
                }
                count = 1;
            }
            else {
                count++;
            }
        }

        if( count > max ) max = count;

        cout << size - max << '\n';
    }
    return 0;
}
