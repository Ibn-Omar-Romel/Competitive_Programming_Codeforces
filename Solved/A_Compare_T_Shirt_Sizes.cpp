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

int Shirtsize ( char ch ) {

    switch ( ch )
    {
        case 'S':
            return 1;
            break;

        case 'M':
            return 2;
            break;
        
        case 'L':
            return 3;
            break;
        
        default:
            break;
    }
    return -1;
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        string s1,s2;
        cin >> s1 >> s2;

        int value1 = Shirtsize( s1[ s1.length() - 1 ] );
        int value2 = Shirtsize( s2[ s2.length() - 1 ] );

        if( value1 > value2 ) cout << ">\n";
        else if( value1 < value2 ) cout << "<\n";
        else if( value1 == value2 and s1[ s1.length() - 1 ] == 'M' ) cout << "=\n";

        else {
            
            if( s1[ s1.length() - 1] == 'S' ){

                int value1 = s1.size() - 1 ;
                int value2 = s2.size() - 1 ;

                if( value1 < value2 ) cout << ">\n";
                else if( value1 > value2 ) cout << "<\n";
                else cout << "=\n";
            }

            else if( s1[ s1.length() - 1] == 'L' ){

                int value1 = s1.size() - 1 ;
                int value2 = s2.size() - 1 ;

                if( value1 > value2 ) cout << ">\n";
                else if( value1 < value2 ) cout << "<\n";
                else cout << "=\n";
            }
        }
        

    }
    return 0;
}
