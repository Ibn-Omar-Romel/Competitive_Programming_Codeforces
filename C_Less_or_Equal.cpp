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

    int n ;
    cin >> n;

    int k;
    cin >> k;

    vector < int > vec;

    for ( int i = 0 ; i < n ; i++ ) {

        int a;
        cin >> a;
        vec.push_back( a );
    }

    sort ( vec.begin(), vec.end() );

    if ( k == 0 ) {

        cout << (vec[0] == 1 ? -1 : 1 ) << '\n';
    }
    else {

        if ( vec[ k - 1 ] == vec[ k ] ) cout << "-1\n";
        else cout << vec[ k - 1 ] << '\n';
    }


    return 0;
}
