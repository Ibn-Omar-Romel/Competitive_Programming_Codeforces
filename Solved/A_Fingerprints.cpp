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

    int n , m;
    cin >> n >> m;

    int seq[n];
    int finger[m];

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> seq[i];
    }

    for ( int i = 0 ; i < m ; i++ ) {

        cin >> finger[i];
    }

    for ( int i = 0 ; i < n ; i++ ) {

        for ( int j = 0 ; j < m ; j++ ) {

            if( seq[i] == finger[j] ) {

                cout << seq[i] << " ";
                break;
            }
        }
    }

    cout << '\n';

    return 0;
}
