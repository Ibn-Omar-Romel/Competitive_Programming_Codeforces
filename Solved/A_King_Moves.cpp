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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    st s;
    cin >> s;

    if ( ('b' <= s[0] and s[0] <= 'g') and ('2' <= s[1] and s[1] <= '7') ) {

        cout << "8\n";
    }
    else if ( ('a' == s[0] || s[0] == 'h') and ('1' == s[1] || s[1] == '8') ){

        cout << "3\n";
    }
    else{
        
        cout << "5\n";
    }

    return 0;
}
