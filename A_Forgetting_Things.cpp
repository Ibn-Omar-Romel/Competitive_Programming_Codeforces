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

    int a, b;
    cin >> a >> b;

    if ( abs (a - b) > 1 || a > b ) {

        if ( a == 9 and b == 1 ) cout << "9 10\n";

        else cout << "-1\n";
    }

    else if ( a == b ) cout << ( a * 10 ) << " " << ( ( b * 10 ) + 1 ) << '\n';

    else if ( a < b ) cout <<( ( a * 10 ) + 9) << " " << ( b * 10 )  << '\n';



    return 0;
}
