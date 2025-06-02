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

    int t, k;
    cin >> t >> k;

    int joy = INT_MIN ;
    while( t-- ) {

        int Fi, Ti;
        cin >> Fi >> Ti;

        if ( Ti <= k and joy < Fi ) joy = Fi;

        else if( Ti > k and joy < (Fi - Ti + k ) ) joy = Fi - Ti + k;
    }

    cout << joy << '\n';
    return 0;
}
