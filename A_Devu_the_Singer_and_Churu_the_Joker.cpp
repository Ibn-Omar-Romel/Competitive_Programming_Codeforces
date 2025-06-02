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

    int n , d;
    cin >> n >> d;

    
    int gap = ( n - 1 ) * 10 ;
    int sum = gap ;
    int count = gap / 5 ;

    for ( int i = 0 ; i < n ; i++ ) {

        int a;
        cin >> a;

        sum = sum + a;
    }

    // cout << count << " " << sum << " " << gap << '\n';
    // cout << d - sum << '\n';
    // cout << (( d - sum ) / 5) + count  << '\n';
    

    if ( sum == d ) cout << count << '\n';

    else if ( ( d - sum ) > 0 ) {

        cout << count + ( ( d - sum ) / 5 ) << '\n';
    }
    else cout << "-1\n" ;

    return 0;
}
