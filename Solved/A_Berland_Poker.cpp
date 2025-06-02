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

        int n, m, k;
        cin >> n >> m >> k;

        int x = n / k;
        if( x >= m) {
            cout << m << '\n';
        }
        else {
            int q = (m-x)/(k-1);
            if((m-x) % (k-1) != 0) {
                q++;
            }
            cout << x - q << '\n';
        }
    }

    return 0;
}
