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

    vector < int > v;
    int count = 0;
    vector < int > ans;


    for ( int i = 0 ; i < t ; i++ ) {

        int a;
        cin >> a;

        v.push_back( a );

        if( a == 1 ) count++;

        if( count > 1 and a == 1 ) ans.push_back( v[i-1] );
    }
    ans.push_back( v[t-1] );

    cout << count << '\n';
    for ( int i = 0 ; i < count ; i++ ) {

        cout << ans[i] << " ";
    }

    cout << '\n';

    return 0;
}
