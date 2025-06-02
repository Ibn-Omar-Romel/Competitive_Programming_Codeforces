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

    int white = 0 , black = 0 ;

    for ( int i = 0 ; i < 8 ; i++ ) {

        for ( int j = 0 ; j < 8 ; j++ ) {

            char ch;
            cin >> ch;

            if( 'A' <= ch and ch <= 'Z' ) {

                if ( ch == 'Q' ) white = white + 9;
                else if ( ch == 'R' ) white = white + 5;
                else if ( ch == 'B' ) white = white + 3;
                else if ( ch == 'N' ) white = white + 3;
                else if ( ch == 'P' ) white = white + 1;
            }

            else if ( 'a' <= ch and ch <= 'z' ) {

                if ( ch == 'q' ) black = black + 9;
                else if ( ch == 'r' ) black = black + 5;
                else if ( ch == 'b' ) black = black + 3;
                else if ( ch == 'n' ) black = black + 3;
                else if ( ch == 'p' ) black = black + 1;
            }
        }
    }

    if ( white == black ) cout << "Draw\n";

    else if ( white < black ) cout << "Black\n";

    else cout << "White\n";

    return 0;
}
