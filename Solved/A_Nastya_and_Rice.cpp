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

    while(t--) {

        int n , a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int minGrain = a - b;
        int maxGrain = a + b;

        int minPack = c - d;
        int maxPack = c + d;

        if(maxPack < (minGrain*n) or minPack > (maxGrain*n))
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}
