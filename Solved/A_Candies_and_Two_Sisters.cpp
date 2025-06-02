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

    int n, a;
    cin>>n;

    for(int i = 0 ; i < n ; i++) {

        cin>>a;

        if(a == 1 or a == 2)
            cout<<"0\n";
        else if( a % 2 == 0)
            cout<<(a/2)-1<<'\n';
        else
            cout<<(a/2)<<'\n';
    }
    return 0;
}