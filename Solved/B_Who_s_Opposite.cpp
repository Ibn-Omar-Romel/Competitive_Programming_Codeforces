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

        int a, b, c;
        cin >> a >> b >> c;
        
        int dif = abs( a - b );
        dif = dif + dif;

        if( a > dif || b > dif || c > dif ){
            cout << "-1\n";
        }
        else{
            dif = dif / 2 ;

            int ans1 = c + dif;
            int ans2 = c - dif;

            if( 1 <= ans1 and ans1 <= dif*2 ){
                cout << ans1 << '\n';
            }
            else{ 
                cout << ans2 << '\n';
            }
        }

        

    }

    
    return 0;
}

