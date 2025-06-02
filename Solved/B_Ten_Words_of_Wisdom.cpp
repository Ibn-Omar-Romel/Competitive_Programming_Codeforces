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

        int size;
        cin >> size;

        int position = 0 , count = 0, value = INT_MIN;

        for ( int i = 0 ; i < size ; i++ ) {

            count ++;

            int a,b;
            cin >> a >> b;

            if( a <= 10 and b > value ){

                position = count ;
                value = b;
            }
        }

        cout << position << '\n';
    }
    return 0;
}
