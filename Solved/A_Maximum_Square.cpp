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

        int value = 0, count = 0, Max = 0, check = 0;
        
        for ( int i = size - 1 ; i >= 0 ; i-- ) {

            count++;

            if( check == 0 and count <= arra[i] ){

                Max = count;
            }
            else if( check == 0 and count > arra[i] ){
                check = 1;
            }


            if( ( size - i ) >= arra[i] ) {

                value = arra[i];
                break;
            }
        }

        cout << max (value, Max) << '\n';
    }
    return 0;
}
