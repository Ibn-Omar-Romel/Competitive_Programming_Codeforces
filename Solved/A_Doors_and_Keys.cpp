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


        int rkeys = 0 , gkeys = 0 , bkeys = 0;
        int flag = 0;

        for ( int i = 0 ; i < s.length() ; i++ ) {

            if( s[i] == 'r' ) rkeys++;
            else if( s[i] == 'g' ) gkeys++;
            else if( s[i] == 'b' ) bkeys++;

            if( s[i] == 'R' ){

                if( rkeys > 0 )
                    rkeys--;
                else{
                    flag = 1;
                    break;
                }
            }

            if( s[i] == 'G' ){

                if( gkeys > 0 )
                    gkeys--;
                else{
                    flag = 1;
                    break;
                }
            }

            if( s[i] == 'B' ){

                if( bkeys > 0 )
                    bkeys--;
                else{
                    flag = 1;
                    break;
                }
            }
        }

        if( flag == 0 )
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    
    return 0;
}

