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
        int ones = 0 ;
        int sum = 0;
        for ( int i = 0 ; i < size ; i++ ){

            cin >> arra[i];
            if( arra[i] == 1) ones++;
            sum = sum + arra[i];
        }

        if( size == 1 ) {

            if( arra[0] == 1 ) cout << "YES\n";
            else cout << "NO\n";
        }
        
        else {

            sort( arra, arra + size );
            if( arra[size - 1] - arra[size - 2] > 1 ) cout << "NO\n";
            else{
                cout << "YES\n";
            }
        }
    }

    
    return 0;
}

