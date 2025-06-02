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

    int count = 0 ;

    for ( int i = 2 ; i <= n ; i++ ) {

            int flag = 0;

            for ( int j = 2; j <= i/2; j++) {

                if ( i % j == 0 and flag < 2) {
                    
                    flag ++;
                }
            }

            if( flag == 2 ) {

                count ++;
                //cout << i << '\t';
            }

    }

    //cout << '\n';

    cout << count << '\n';

    return 0;
}
