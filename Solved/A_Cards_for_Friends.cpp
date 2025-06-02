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

        int w, h, n;
        cin >> w >> h >> n;

        int count = 1 , i = 1;

        while( w % 2 == 0 || h % 2 == 0 ) {

            if( w % 2 == 0 ){

                count = count + i;
                w = w / 2 ;
                i = i * 2;
            }
            else if ( h % 2 == 0 ){
                count = count + i;
                h = h / 2;
                i = i * 2;
            }
        }
        if( count >= n ){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
    return 0;
}

