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

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int first = max ( (3*a)/10 , (a - ((a/250)*c))) ; // misha
    int second = max ( (3*b)/10 , (b - ((b/250)*d))) ; // vasya

    //cout << first << " " << second << '\n';

    if ( first < second ) cout << "Vasya\n";
    else if ( first > second ) cout << "Misha\n";
    else cout << "Tie\n";
    return 0;
}
