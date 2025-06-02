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

    int a, b, c;
    cin >> a >> b >> c;

    if( a < 1 || b < 2 || c < 4 ) cout << "0\n" ;

    else{

        int value1 = a / 1;
        int value2 = b / 2;
        int value3 = c / 4;

        int value = min ( value1 , min ( value2 , value3));

        cout << ( value * 1) + ( value * 2) + ( value * 4) << '\n';
    }

    return 0;
}
