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
    
    int t;
    cin >> t;

    while( t-- ) {

        vector < int > vec(7,0);

        for(int i = 0 ; i < 7 ; i++ ){

            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());

        cout << vec[0] << " " << vec[1] << " " << vec[6] - vec[0] - vec[1] << '\n';
    }

    return 0;
}

