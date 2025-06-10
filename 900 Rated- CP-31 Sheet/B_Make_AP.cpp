// I got a girl crush , I hate to admit it but,
// I got a heart rush , ain't slowing down.

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


        if( ((2*b)-c) > 0 && ((2*b)-c)%a == 0 ){
            cout << "YES\n";
        }
        else if( (c+a)%(2*b) == 0) {

            cout << "YES\n";
        }      
        else if( ((2*b) - a) > 0 && ((2*b) - a) % c == 0 ){

            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}