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

    int size, k;
    cin >> size >> k;

    int arra[size];

    ll min = INT_MAX, count = 0, flag = 0 ;

    for ( int i = 0 ; i < size ; i++ ) {

        cin >> arra[i];

        if( arra[i] < min ) {

            min = arra[i];
        }
    }

    for ( int i = 0 ; i < size ; i++ ) {

        if( arra[i] != min ) {

            ll value = arra[i] - min ;

            if( value % k != 0 ) {

                flag = 1;
                break;
            }
            else {

                count += value / k ;
            }
        }
    }

    if( flag == 1 ) cout << "-1\n";

    else cout << count << '\n';

    return 0;
}
