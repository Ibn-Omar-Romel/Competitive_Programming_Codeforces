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

    int n ,max_value = 0 ,total = 0 ;
    cin>>n;

    int array[n];

    for(int i = 0 ; i < n ; i++) {

        cin>>array[i];

        if(max_value < array[i])
            max_value = array[i];
    }

    for(int i = 0 ; i < n ; i ++){

        total = total + (max_value  - array[i]);
    }

    cout<<total<<'\n';

    return 0;
}

