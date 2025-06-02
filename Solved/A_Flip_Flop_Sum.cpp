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

        vector < int > vec(size, 0);

        int check = 0, sum = 0, ones = 0 ;

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> vec[i];

            sum = sum + vec[i];

            if( i > 0 and vec[i] == -1 and vec[i-1] == -1 ){

                check++;
            }

            if( vec[i] == 1 ) ones++;
        }

        if( check != 0 ) sum += 4;
        else if ( size == ones) sum -= 4;


        cout << sum << '\n';
    }

    
    return 0;
}

