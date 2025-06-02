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

    int n, v1, v2, t1, t2;
    cin >> n >> v1 >> v2 >> t1 >> t2;

    ll value1 = t1 + t1 + ( n * v1);
    ll value2 = t2 + t2 + ( n * v2);

    if ( value1 == value2 ) cout << "Friendship\n";
    else if ( value1 > value2 ) cout << "Second\n";
    else cout << "First\n";

    return 0;
}
