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
    int n, m, x, j;
    cin >> n >> m;
    bool b[m];

    for (int i = 0; i < m; i++) b[i] = false;

    for (int i = 0; i < n; i++) {
        cin >> x;
        while (x--) {
            cin >> j;
            b[j - 1] = true;
        }
    }

    for (bool t : b) {
        if (!t) {
            cout << "NO" << endl; return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}