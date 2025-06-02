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

    int size;
    cin >> size;

    ll sum = 0 ;

    int value = INT_MAX;

    int arra[size];

    for ( int i = 0 ; i < size ; i++ ) {

        cin >> arra[i];

        sum = sum + arra[i];

        if( (arra[i] % 2 != 0) and value > arra[i] ) {

            value = arra[i];
        }
    }


    if( sum % 2 == 0 ) cout << sum << '\n';
    else {

        cout << sum - value << '\n';

        // sort ( arra, arra + size );

        // for ( int i = 0 ; i < size ; i++ ) {

        //     if( ( sum - arra[i] ) % 2 == 0 ) {

        //         cout << sum - arra[i] << '\n';
        //         break;
        //     }
        // }

    }

    return 0;
}
