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

    string s;

    for (int i = 0; i < t; i++)
    {
        cin>>s;

        int first = (s[0] - '0') + (s[1] - '0') + (s[2] - '0') ;

        int last =  (s[3] - '0') + (s[4] - '0') + (s[5] - '0') ;

        if(first == last) {

            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    

    return 0;
}

