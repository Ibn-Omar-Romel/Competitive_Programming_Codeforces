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

        int n, m;
        cin >> n >> m;

        ll sum1 = 0 , sum2 = 0;
        ll a;

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> a;

            sum1 = sum1 + a;
        }

        for ( int i = 0 ; i < m ; i++ ) {

            cin >> a;

            sum2 = sum2 + a;
        }

        if( sum1 > sum2 ) cout << "Tsondu\n";

        else if( sum1 < sum2 ) cout << "Tenzing\n";

        else cout << "Draw\n";
    }
    return 0;
}
