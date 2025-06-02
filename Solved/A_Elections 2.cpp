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

    int arra[size];

    int max = INT_MIN, sum = 0 ;

    for ( int i = 0 ; i < size ; i++ ) {

        cin >> arra[i];

        sum = sum + arra[i];

        if( arra[i] > max ) {

            max = arra[i];
        }

    }

    while( true ) {

        int value = ( max * size ) - sum;

        if( value > sum ) break;
        else max++;
    }

    cout << max << '\n';

    return 0;
}
