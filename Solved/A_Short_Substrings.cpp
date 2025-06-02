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

    string s, mainS = "";

    for(int i = 0 ; i < t ; i++) {

        cin>>s;

        mainS = mainS + s[0] + s[1];

        for( int j = 3 ; j < s.length() ; j += 2) {

            mainS = mainS + s[j];
        }

        cout<<mainS<<'\n';
        mainS = "";
    }

    return 0;
}

