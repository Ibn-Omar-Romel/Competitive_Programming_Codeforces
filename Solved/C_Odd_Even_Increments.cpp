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

        vector < int > vec(size,0);

        int flag = 0;

        for ( int i = 0 ; i < size ; i++ ){

            cin >> vec[i];

            if( i > 1 and ( vec[i - 2] % 2 != vec[i] % 2) ){

                flag = 1;
            }
        }

        if( flag == 1 ) cout << "NO\n";
        else cout << "YES\n";
    }

    
    return 0;
}

