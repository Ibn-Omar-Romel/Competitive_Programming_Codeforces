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

    int size;
    cin >> size;

    string s;
    cin >> s;

    int one = 0;
    int zero = 0;

    for ( int i = 0 ; i < size ; i++ ) {

        if( s[i] == '1' ) one++;
        else zero++;
    }
    
    cout << s.size() - ( min( one,zero) * 2 ) << '\n';

    return 0;
}
