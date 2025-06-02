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

    int size;
    cin >> size;
    string s;
    cin >> s;

    int ones = 0 , zeros = 0 ;

    for ( int i = 0  ; i < s.size() ; i++ ) {

        if ( s[i] == '1' ) ones++;
        else zeros++;
    }

    if( size == 1 || ones != zeros) {

        cout << 1 << '\n';
        cout << s << '\n';
    }
    else {

            

        // if( zeros == ones ){
            cout << 2 << '\n';
            cout << s[0] << " ";

            for ( int i = 1 ; i < s.size() ; i++ ) {

                cout << s[i] ;
            }
            cout << '\n';
        //}
    }

    return 0;
}
