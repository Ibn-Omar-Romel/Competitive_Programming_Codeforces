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

        st s;
        cin >> s;


        
        int ones = count( s.begin(), s.end(), '1');
        int zeros = count( s.begin(), s.end(), '0');

        if( s.size() < 3 ) cout << "0\n";

        else if( ones != zeros ) cout << min( ones,zeros) << '\n';

        else {

            cout << min(ones,zeros) - 1 << '\n';
        }
    }

    return 0;
}
