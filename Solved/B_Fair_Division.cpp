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

        int sum = 0, odd = 0, even = 0, same = 0;
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> vec[i];
            sum = sum + vec[i];

            if( vec[i] % 2 == 0 ) even++;
            else odd++;

            if( i > 0 and vec[i] != vec[i-1]) same = 1;

        }
        if( same == 0 and size % 2 != 0) cout << "NO\n";
        else if( sum % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}

