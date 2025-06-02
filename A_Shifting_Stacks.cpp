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

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;

        int flag = 0;

        ll sum = 0;

        int arra[n] ;

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra[i];

            sum += arra[i];

            if( sum < ( i * ( i + 1 )) / 2 ) flag = 1;
        }

        if ( flag == 0 ) cout << "YES\n";

        else cout << "NO\n";
    }
    return 0;
}
