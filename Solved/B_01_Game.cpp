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

        string s;
        cin >> s;

        int ones = 0, zeros = 0;

        for( int i = 0 ; i < s.size() ; i++ ) {

            if ( s[i] == '0' ) ones++;
            else zeros++;
        }

        int value = min( ones, zeros);

        if( value % 2 == 0 ) cout << "NET\n";

        else cout << "DA\n";
    }
    return 0;
}
