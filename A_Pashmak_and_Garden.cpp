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

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2 ;

    if ( abs( x1 - x2 ) == abs( y1 - y2 ) ) {

        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }
    else if ( x1 == x2 ) {

        cout << x1 + abs( y1 - y2 ) << " " << y1 << " ";
        cout << x2 + abs( y1 - y2 ) << " " << y2 << endl;
    }
    else if ( y1 == y2 ) {

        cout << x1 << " " << y1 + abs( x1 - x2 ) << " " ;
        cout << x2 << " " << y2 + abs( x1 - x2 ) << endl;     
    }
    else {
        cout << "-1\n";
    }

    return 0;
}
