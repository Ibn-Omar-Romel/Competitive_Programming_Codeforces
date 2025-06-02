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

        string keyboard, s;
        cin >> keyboard >> s;

        int count = 0, position = 0;

        int value[26] = {0};

        for ( int i = 0 ; i < keyboard.length() ; i++ ) {

            position = keyboard[i] - 97;

            if( value[position] == 0 ){
                
                value[position] = i + 1; 
            }
        }
        

        for( int i = 1 ; i < s.length() ; i++ ){

            int value1 = value[ s[i-1] - 97 ];

            int value2 = value[ s[i] - 97];

            count = abs(value1 - value2) + count;

        }

        cout << count << '\n';
    }
    
    return 0;
}

