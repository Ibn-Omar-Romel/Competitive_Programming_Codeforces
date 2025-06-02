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

    int size, count = 0 ;
    cin >> size ;

    int arra[size][2];


    for( int i = 0 ; i < size ; i++ ) {

        for ( int j = 0 ; j < 2 ; j++ ) {

            cin >> arra[i][j];
        }
    }

    for( int i = 0 ; i < size ; i++){ 

        for ( int j = 0 ; j < size ; j++) {

            if( i == j ){
                continue;
            }
            else{

                if( arra[i][0] == arra[j][1])
                    count++;
            }
        }
    }

    cout << count << "\n";

    return 0;
}
