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

int main()
{
    ll n;
    cin >> n ;

    vector < ll > a(n) ;

    for ( ll i=0 ; i < n ; i++ ) {

        cin>>a[i];
    }

    sort( a.begin() , a.end() ) ;

    ll ans = a[n-2] - a[0];
    ans = min( ans, ( a[n-1] - a[1] ) ) ;

    cout << ans << '\n';

    return 0;
}