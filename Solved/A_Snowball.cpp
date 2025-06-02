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

    int w,h,u1,d1,u2,d2;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;

    for ( int i = h ; i >= 1 ; i-- ) {

        w = w + i;

        if( i == d1 ) {

            w = w - u1;

            if( w < 0 ) w = 0 ;
        }

        if( i == d2 ) {

            w = w - u2;

            if( w < 0 ) w = 0 ;
        }
    }

    cout << w << '\n';


    return 0;
}
