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
    
    long long int two, three, five, six;
    cin >> two >> three >> five >> six;

    long long int first = min( two, min( five, six ));

    long long int second = min( two - first , three );

    cout << ( first * 256 ) + ( second * 32 ) << '\n';

    
    return 0;
}

