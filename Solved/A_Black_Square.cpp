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

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;
    int sum = 0;
    for ( int i = 0 ; i < s.size() ; i++ ) {

        if( s[i] == '1') sum = sum + a;

        else if( s[i] == '2' ) sum = sum + b;

        else if( s[i] == '3' ) sum = sum + c;

        else sum = sum + d;
    }

    cout << sum << '\n';

    return 0;
}