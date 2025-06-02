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
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]
#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , k;
    cin >> n >> k;

    int arra[n];
    int zero = 0 ;
    for ( int i = 0 ; i < n ; i++ ) {

        cin >> arra[i];

        if ( arra[i] == 0 ) zero++ ;
    }

    sort ( arra, arra + n );

    int value = 0;

    if ( n == k ) value = arra[0];

    else value = arra[ n - k ];

    int count = 0 ;

    for ( int i = 0 ; i < n ; i++ ) {

        if ( arra[i] >= value and arra[i] > 0 ) count++;
    }

    if ( zero == n ) cout << 0 << '\n';

    else cout << count << '\n';

    return 0;
}
