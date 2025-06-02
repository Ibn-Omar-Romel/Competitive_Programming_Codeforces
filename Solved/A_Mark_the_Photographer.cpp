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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n, x;
        cin >> n >> x;

        vector < int > vec;

        for ( int i = 0 ; i < 2*n ; i++ ) {

            int a;
            cin >> a;

            vec.push_back(a);
        }

        sort( vec.begin(), vec.end()) ;

        int flag = 0;

        for ( int i = 0, j = n ; i < n ; i++, j++ ){

            if ( vec[j] - vec[i] < x ) {

                flag = 1;
                break;
            }
        }

        if ( flag == 1 ) cout << "NO\n";
        else cout << "YES\n";

    }
    return 0;
}
