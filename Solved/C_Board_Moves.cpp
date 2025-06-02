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

    while( t-- ) {

        long long int n;
        cin >> n;

        long long int count = n / 2 , sum = 0;
        
        for ( long long int i = 1, j = 8 ; i <= count ; i++ , j = j + 8 ){

            sum = sum + ( i * j );
        }
        cout << sum << '\n';
    }
    return 0;
}

