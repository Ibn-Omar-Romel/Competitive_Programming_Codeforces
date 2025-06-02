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

    int t;
    cin >> t;

    while( t-- ) {

        int n, c0, c1 , h;
        cin >> n >> c0 >> c1 >> h ;

        st s;
        cin >> s;

        int zeros =  0, ones = 0, ans1 = 0, ans2 = 0 , ans3 = 0;
        for ( int i = 0 ; i < n ; i++ ) {

            if( s[i] == '1' ) ones++;
            else zeros++;
        }

        ans1 = ( ones * c1) + ( zeros * c0);
        ans2 = ( n * c1 ) + ( zeros * h);
        ans3 = ( n * c0) + ( ones * h);

        cout << min( ans1, min( ans2 , ans3)) << '\n';
    }
    return 0;
}
