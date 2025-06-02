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

        int n , k;
        cin >> n >> k;

        double red = 2*n , green = 5*n , blue = 8*n ;

        int count = ceil( red / (double)k ) + ceil( green / (double)k) + ceil( blue / (double)k ) ;

        cout << count << '\n';
    
    return 0;
}


