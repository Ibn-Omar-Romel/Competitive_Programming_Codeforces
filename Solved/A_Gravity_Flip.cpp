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
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arra[n];
    for(int i = 0 ; i < n ; i++) {

        cin>>arra[i];
    }

    sort(arra, arra + n);

    for(int i = 0 ; i < n ; i++) {

        cout<<arra[i]<<" ";

    }
    cout<<"\n";

    return 0;
}