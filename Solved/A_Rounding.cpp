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

    int n;
    cin >> n;

    int rem = n % 10;

    if ( rem == 0 ) cout << n << '\n';
    else if( 1 <= rem and rem <= 4 ) cout << n - rem << '\n';
    else if( 6 <= rem and rem <= 9 ) cout << n + (10 - rem) << '\n';
    else if( rem == 5 ) cout << n - 5 << '\n';

    return 0;
}
