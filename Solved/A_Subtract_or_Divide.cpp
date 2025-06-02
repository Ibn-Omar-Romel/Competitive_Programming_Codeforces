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

        if( n == 1 ) {
            cout << "0\n";
        }
        else if( n == 2 ) {

            cout << "1\n";
        }
        else if( n == 3 ){

            cout << "2\n";
        }
        else if ( n % 2 == 0 ) {

            cout << "2\n";
        }
        else{
            cout << "3\n";
        }

    }
    return 0;
}
