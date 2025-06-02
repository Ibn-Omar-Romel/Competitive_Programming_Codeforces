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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int i = 0, size = s.size();
    while ( true  ) {

        if( s[i] == '.'){
            cout << "0";
            i++;
        }
        else if( s[i] == '-' and s[i+1] == '.' ){
            cout << "1";
            i+=2;
        }
        else if( s[i] == '-' and s[i+1] == '-' ){
            cout << "2";
            i+=2;
        }

        if( i >= size) break;

    }
    return 0;
}
