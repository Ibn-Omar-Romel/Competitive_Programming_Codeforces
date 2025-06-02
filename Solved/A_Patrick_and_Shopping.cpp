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
    
    long long int d1, d2, d3;

    cin >> d1 >> d2 >> d3;

    cout << min( min( d1+d1+d3+d3,d3+d3+d2+d2) , min(d1+d2+d3, (d1+d1+d2+d2))) << '\n';

    
    
    return 0;
}

