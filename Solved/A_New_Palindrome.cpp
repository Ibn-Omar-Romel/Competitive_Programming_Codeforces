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

    int t;
    cin >> t;

    while( t-- ) {

        string s;
        cin >> s;

        if( count( s.begin(), s.end(), s[0] ) == s.length() ) {
            cout << "NO\n";
        }
        else{

            int value1 = count( s.begin(), s.end(), s[0] );
            int value2 = count( s.begin(), s.end(), s[1] );

            if( (value1 == s.length()-1) || (value2 == s.length()-1)){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
    }


    return 0;
}