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
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arra[4];

    cin >> arra[0] >> arra[1] >> arra[2] >> arra[3];

    sort(arra, arra + 4);

    int a = arra[3] - arra[1];
    int b = arra[3] - arra[2];
    int c = arra[3] - arra[0];
    
    cout << a << " " << b << " " << c << "\n";

    return 0;
}

