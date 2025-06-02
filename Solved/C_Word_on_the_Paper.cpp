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

        char ch[8][8];

        st s = "";
        for ( int i = 0 ; i < 8 ; i++ ) {

            for ( int j = 0 ; j < 8 ; j++ ) {

                cin >> ch[i][j];

                if( ch[i][j] != '.') s = s + ch[i][j];
            }
        }

        cout << s << '\n';
    }
    return 0;
}
