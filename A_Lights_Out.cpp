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

    vec < int > v[3];

    for( int i = 0 ; i < 3 ; i++ ) {

        v[i].push_back(1);
        v[i+1].push_back(1);
        v[i+2].push_back(1);
    }

    vec < int > v1[3];

    for ( int i = 0 ; i < 3 ; i++ ) {

        int a , b, c;
        cin >> a >> b >> c;

        v1[i].push_back(a);
        v1[i+1].push_back(b);
        v1[i+2].push_back(c);

    }

    
    return 0;
}
