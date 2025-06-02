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

    st s ;
    cin >> s;

    while( true ) {

        int n = stoi(s);

        int sum = 0 ;
        int flag = 0 ;

        for ( int i = 0 ; i < s.size() ; i++ ) {

            sum = sum + (s[i] - '0');
        }

        if( sum % 4 == 0 ) {

            cout << s << '\n';
            flag = 1;
            break;
        }

        n++;
        s = to_string(n);
        
    }

    
    return 0;
}
