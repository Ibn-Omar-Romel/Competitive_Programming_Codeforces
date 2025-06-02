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

    string s;
    cin >> s;

    int ones = 0, fours = 0, flag = 0;
    
    for ( int i = 0 ; i < s.size() ; i++ ) {


        if ( s[i] != '1' and s[i] != '4' ) {

            flag = 1;
            break;
        }
        else if ( s[i] == '1' ) {

            ones = 1;
            fours = 0;
        }
        else if ( s[i] =='4' and ones == 0 ) {

            flag = 1;
            break;
        }
        else if (fours > 1){

            flag = 1;
            break;

        }
        else if ( s[i] == '4' and ones == 1 ) {

            fours++;
        }
    }

    if ( flag == 1 ) cout << "NO\n";
    else cout << "YES\n";

    return 0;
}
