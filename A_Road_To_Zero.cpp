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

        long long int x, y, a, b;
        cin >> x >> y >> a >> b;

        long long int minValue = min( x, y);
        long long int maxValue = max( x, y);

        long long int ans1 = ( x + y) * a;
        
        long long int ans2 = (minValue * b) + ((maxValue - minValue) * a);

        cout << min( ans1, ans2 ) << '\n';

    }

    return 0;
}


/*



long long int x, y, a, b;
        cin >> x >> y >> a >> b;

        long long int ans1 = a * ( x+y );
        long long int ans2 = b * ( x+y );
        
        long long int ans3, ans4, ans5;
        if( x < y ){
            ans3 = (x * b) + ((y - x) *  a) ;
        }
        else{
            ans3 = (y * b) + ((x - y) *  a) ;
        }

        long long int ans = min( min( ans1, ans2), ans3);
        
        if( y > x and  a < b){

            long long value1 = y * b;
            ans = min( ans, value1);
        }


        cout << ans << '\n';



*/