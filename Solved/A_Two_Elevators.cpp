// Mera falsafaa kandhe pe mera basta
// Chala main jahaan le chala mujhe rasta

// Ilahi.

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

        int a , b , c ;
        cin >> a >> b >> c ;
        
        int t1 = abs(a-0);

        int t2 = abs(c-b) + abs(c-0);

        if( t1 < t2 ) {

            cout << 1 << '\n';
        }
        else if( t2 < t1) {

            cout << 2 << '\n';
        }
        else{
            cout << 3 << '\n';
        }

    }


    return 0;
}