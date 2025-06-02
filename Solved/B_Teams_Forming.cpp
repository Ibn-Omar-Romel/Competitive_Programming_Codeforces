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
    
    int size;
    cin >> size;

    int arra[size];
    
    for ( int i = 0 ; i < size ; i++ ) cin >> arra[i];

    int problems = 0;

    sort( arra, arra + size );

    for ( int i = 0 ; i < size ; i += 2 ){

        problems = problems + arra[i+1] - arra[i];
    }

    cout << problems << '\n';
    
    return 0;
}

