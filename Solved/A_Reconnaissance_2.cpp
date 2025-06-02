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

    int size;
    cin >> size;

    vector < int > vec;
    
    int index1 = 0;
    int index2 = 0;

    int min = INT_MAX;

    for( int i = 0 ; i < size ; i++ ) {

        int a;
        cin >> a;

        vec.push_back(a);

        if( i > 0 and abs( vec[i] - vec[i-1] ) < min ){

            index1 = i ;
            index2 = i+1 ;
            min = abs( vec[i] - vec[i-1] );
        }
    }

    if( abs( vec[0] - vec[size - 1]) < min ) cout << size << " " << "1\n";
    else cout << index1 << " " << index2 << '\n';

    return 0;
}
