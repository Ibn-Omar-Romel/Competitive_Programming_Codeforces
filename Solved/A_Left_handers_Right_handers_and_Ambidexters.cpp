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

    int l,r,a;
    cin >> l >> r >> a;

    if( l == r ) {

        cout << (l + ( a / 2 )) * 2 << '\n';
    }
    else{

        int teams = 0;

        int value = 0 ;

        if( l < r ) {

            value = r - l;
        }
        else {

            value = l - r;
        }

        if( a <= value ) {

            teams = (min(l,r)+a) * 2;
        }
        else{

            teams = (max(l,r)*2) + (((a-value)/2) * 2);
        }

        cout << teams << '\n';
    }


    return 0;
}
