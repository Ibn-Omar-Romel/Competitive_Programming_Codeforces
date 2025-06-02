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

    while( t-- ){

        long long int x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        if( p1 == p2 ){

            if( x1 > x2 )       cout << ">\n";
            else if( x1 < x2 )  cout << "<\n";
            else                cout << "=\n";
        }
        else{
            
            
            while( x1 <= 100000 ) {

                if( p1 == 0) break;

                else{
                    x1 = x1 * 10;
                    p1--;
                }
            }

            while( x2 <= 100000 ) {

                if( p2 == 0) break;

                else{
                    x2 = x2 * 10;
                    p2--;
                }
            }

            if( p1 > p2 ) cout << ">\n";
            else if( p1 < p2 ) cout << "<\n";
            else{

                if( x1 > x2 )       cout << ">\n";
                else if( x1 < x2 )  cout << "<\n";
                else                cout << "=\n";
            }
        }
    }

    return 0;
}
