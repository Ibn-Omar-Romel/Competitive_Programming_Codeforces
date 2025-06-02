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

        char arra[8][8];

        int count = 0, positionx = 0, positiony = 0;
        int ansX = 0, ansY = 0;

        for ( int i = 0 ; i < 8 ; i++ ) {

            for ( int j = 0 ; j < 8 ; j++ ) {

                cin >> arra[i][j];

            }
        }

        for ( int i = 0 ; i < 8 ; i++ ) {

            for ( int j = 0 ; j < 8 ; j++ ) {

                if( arra[i][j] == '#' and arra[i+1][j+1] == '#' and arra[i-1][j-1] == '#' and arra[i+1][j-1] == '#' and arra[i-1][j+1] == '#' ){
                    cout << i+1 << " " << j+1 << '\n';
                }

            }
        }
    }

    return 0;
}