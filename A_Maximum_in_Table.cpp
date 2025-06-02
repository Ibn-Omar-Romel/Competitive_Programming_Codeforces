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

    int n ;
    cin >> n;

    int arra[n+1][n+1];

    for ( int i = 1 ; i <= n ; i++ ) {

        arra[1][i] = 1;
        arra[i][1] = 1;
    }

    for ( int i = 2 ; i <= n ; i++ ) {

        for ( int j = 2 ; j <= n ; j++ ) {

            arra[i][j] = arra[i-1][j] + arra[i][j-1];
        }
    }

    cout << arra[n][n] << '\n';

    return 0;
}
