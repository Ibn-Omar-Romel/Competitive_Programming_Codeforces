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
#include <algorithm>
#include <iomanip>
#include <unordered_map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size, sum = 0 ;
    double ans = 0;

    cin>> size;

    int arra[size];

    for(int i = 0 ; i < size ; i++) {

        cin>>arra[i];
        sum = sum + arra[i];
    }

    ans = (double)sum / (double)size;
    cout << fixed <<setprecision(12)<< ans <<'\n';

    return 0;
}

