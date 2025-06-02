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

    int t;
    cin>>t;

    int dup[26] = {0};

    for(int i = 0 ; i < t ; i++) {

        int size;
        cin>>size;

        string s;
        cin>>s;

        for(int j = 0 ; j < size ; j++){

            dup[ (int)s[j] - 96] = dup[ (int)s[j] - 96] + 1;
        }
    }

    return 0;
}

