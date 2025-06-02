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
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];
        }

        sort( arra, arra + size );

        int count = 1;

        for ( int i = 0 ; i < size - 1 ; i++  ) {

            if ( arra[i] != arra[i+1]) {

                count++;
            }
        }

        if( (size - count) % 2 == 0 ) {

            cout << count << '\n';
        }
        else{
            
            cout << count - 1 << '\n';
        }
    }
    return 0;
}
