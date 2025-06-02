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

        if( s.length() == 1 || (s[0] == 'a' and s[1] == 'b') || (s[0] == 'b' and s[1] == 'a') ){
            cout << "NO\n";
        }
        else{

            int count = 0 , flag = 0 ;

            for ( int i = 0 ; i < s.length() - 1 ; i++ ) {

                if( ((s[i] == 'a' and s[i+1] == 'b') || (s[i] == 'b' and s[i+1] == 'a')) ){
                    
                    if( count == 0 ){
                        count++;
                    }
                    else{
                        flag = 1;
                        break;
                    }
                }
                else{
                    count = 0;
                }
            }

            if( flag != 0 || count != 0 ) cout << "NO\n";
            else cout << "YES\n";
        }
    }

    return 0;
}

