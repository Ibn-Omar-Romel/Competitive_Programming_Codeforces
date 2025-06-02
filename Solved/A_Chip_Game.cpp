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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        ll n, m;
        cin >> n >> m;

        if( n == m ) {
            
            cout << "Tonya\n";
        }
        else if( n % 2 ==  m % 2 ) {

            cout << "Tonya\n";
        }
        else{
            cout << "Burenka\n";
        }
    }
    return 0;
}
