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

    int k, r, value = 0, rem = 0 ;

    cin>>k>>r;

    int i = 1;

    while(true) {

        value = k*i;

        rem = value % 10;
        if(rem == r || rem == 0)
            break;
        
        i++;
    }

    cout<<i<<"\n";


    return 0;
}