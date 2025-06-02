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

        char s[3][3];

        int count = 0;
        
        char ch ;

        for ( int i = 0 ; i < 3 ; i++ ) {

            for ( int j = 0 ; j < 3 ; j++ ) {

                cin >> s[i][j];
            }

            if( s[i][0] == s[i][1] and s[i][1] == s[i][2] and count == 0 and s[i][2] != '.'){

                count ++;
                ch = s[i][0];
            }
            else if( s[i][0] == s[i][1] and s[i][1] == s[i][2] and count != 0 and s[i][2] != '.'){

                count ++;
            }
        }

            if( s[0][0] == s[1][1] and s[1][1] == s[2][2] and s[2][2] != '.'){

                if(count == 0){
                    count++;
                    ch = s[0][0];
                }
                else{
                    count++;
                }
            }

            if( s[0][2] == s[1][1] and s[1][1] == s[2][0] and s[2][0] != '.'){

                if(count == 0){
                    count++;
                    ch = s[0][2];
                }
                else{
                    count++;
                }
            }


            for ( int i = 0 ; i < 3 ; i++ ) {

                if( s[0][i] == s[1][i] and s[1][i] == s[2][i] and count == 0 and s[2][i] != '.'){

                    count++;
                    ch = s[0][i];
                }
                else if(s[0][i] == s[1][i] and s[1][i] == s[2][i] and count != 0 and s[2][i] != '.'){

                    count++;
                }
            }

            if( count == 1 ){
                cout << ch << '\n';
            }
            else{
                cout << "DRAW\n";
            }
        
    }

    
    return 0;
}

