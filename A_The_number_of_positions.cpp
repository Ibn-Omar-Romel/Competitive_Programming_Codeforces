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
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , a, b;
    cin >> n >> a >> b;

    int left = n - a;

    if ( left == 1 ) cout << 1 << '\n';

    else if ( a + b == n  ) cout << b << '\n'; 

    else if ( left < b ) cout << left << '\n';

    else cout << b + 1 << '\n';

    return 0;
}
