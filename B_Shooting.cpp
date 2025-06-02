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

    int n ;
    cin >> n;

    int arra[n];
    int temp[n];

    int sum = 0 , count = 0 ;

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> arra[i];

        temp[i] = arra[i];
    }

    sort ( arra, arra + n ) ;

    for ( int i = n - 1 ; i >= 0 ; i-- ) {

        sum += ( arra[i] * count ) + 1;
        count++;
    }

    cout << sum << '\n';

    for ( int i = n - 1 ; i >= 0 ; i-- ) {

        for ( int j = 0 ; j < n ; j++ ) {

            if ( arra[i] == temp[j] ) {

                cout << j + 1 << " ";
                temp[j] = 0;
            }
        }
    }

    cout << '\n';

    return 0;
}
