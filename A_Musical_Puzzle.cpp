// Sweet Creature, had another talk about where it's going wrong.

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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        string s;
        cin >> s;

        set < string > se;

        string st = "";

        for ( int i = 0 ; i < size - 1 ; i++ ) {

            st = st + s[i] + s[i+1];

            se.insert(st);

            st = "";
        }

        cout << se.size() << '\n';
    }

    return 0;
}