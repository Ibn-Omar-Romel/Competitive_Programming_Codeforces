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

    int arra[n];

    for( int i = 0 ; i < n ; i++ ) {

        int a, b;
        cin >> a >> b;

        arra[i] = b;
    }

    int page;
    cin >> page;

    int count = 0;

    for ( int i = 0 ; i < n ; i++ ) {

        if( page <= arra[i] ) {

            cout << n - count << '\n';
            break;
        }
        else {
            count ++;
        }
    }

    return 0;
}
