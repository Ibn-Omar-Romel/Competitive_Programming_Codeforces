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

        long long int x;
        cin >> x;

        long long int ans = x;

        if( x < 10 ){
            cout << x << '\n';
        }
        else{

            long long int divide = 0 ;
            while( x >= 10 ){

                divide = x / 10;
                x = x % 10 ;

                x = x + divide;
                ans += divide;
            }
            cout << ans << '\n';
        }

    }

    return 0;
}
