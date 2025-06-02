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
        vector < int > veca(size, 0);
        vector < int > vecb(size, 0);

        long long int mina = INT_MAX, minb = INT_MAX, count = 0;

        for( int i = 0 ; i < size ; i++ ) {

            cin >> veca[i];
            if( veca[i] < mina ) mina = veca[i];
        }
        for( int i = 0 ; i < size ; i++ ) {

            cin >> vecb[i];
            if( vecb[i] < minb ) minb = vecb[i];
        }


        for ( int i = 0 ; i < size ; i++ ){

            if( veca[i] > mina and vecb[i] > minb ){

                long long int value1 = veca[i] - mina;
                long long int value2 = vecb[i] - minb;

                if( value1 <= value2 ){

                    count = count + value1 + (value2 - value1);
                }
                else{
                    count = count + value2 + (value1 - value2);
                }

                continue;
            }

            if( veca[i] > mina ) count = count + (veca[i] - mina);
            else if( vecb[i] > minb ) count = count + (vecb[i] - minb);
            
        }

        cout << count << '\n';
    }

    return 0;
}

