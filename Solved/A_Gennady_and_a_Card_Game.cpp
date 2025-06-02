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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    vector < string > vec(5,"");
    int flag = 0;

    for ( int i = 0 ; i < 5 ; i++ ) {
        
        cin >> vec[i];
        if( vec[i][0] == s[0] || vec[i][1] == s[1] ){
            flag = 1;
        }
    }
    
    if( flag == 1 ) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}

