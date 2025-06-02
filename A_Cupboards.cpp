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

    int left_zero = 0 , left_one = 0 , right_zero = 0 , right_one = 0;
    for ( int i = 0 ; i < t ; i++ ) {

        int a,b;
        cin >> a >> b;

        if( a == 1 ) left_one++;
        else left_zero++;

        if( b == 1 ) right_one++;
        else right_zero++;
    }

    //cout << right_zero << " " << right_one << '\n';

    cout << min( left_one, left_zero) + min( right_one, right_zero) << '\n';

    return 0;
}
