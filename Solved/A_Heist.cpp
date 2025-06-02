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

        int min = INT_MAX;
        int max = INT_MIN;

        for ( int i = 0 ; i < size ; i++ ) {

            int a;
            cin >> a;

            if( a < min ) min = a;
            if( a > max ) max = a;
            
        }


        if ( size == 1 ) cout << "0\n";
        else cout << (max - min) - size + 1 << '\n';
    
    return 0;
}
