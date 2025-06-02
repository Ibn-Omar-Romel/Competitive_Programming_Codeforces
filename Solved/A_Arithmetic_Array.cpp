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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        ll size;
        cin >> size;

        ll sum = 0;

        int arra[size];

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];
            sum = sum + arra[i];
        }

        if( size == sum ) cout << "0\n";

        else if( sum < size ) cout << "1\n";

        else{
            cout << sum - size << '\n';
        }

    }
    return 0;
}
