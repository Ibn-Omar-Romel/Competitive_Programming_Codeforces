// I'm out of my head and I know that you're scared, because heart gets broken.

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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        int arra[size];

        int max = INT_MIN;
        int min = INT_MAX;

        for( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];

            if( arra[i] < min) {

                min = arra[i];
            }
            if( arra[i] > max) {

                max = arra[i];
            }
        }

        cout << max - min << '\n';
    }


    return 0;
}