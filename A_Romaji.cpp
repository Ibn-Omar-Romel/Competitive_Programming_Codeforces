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

    int cons = 0 ; 
    int vow = 0;
    int n = 0 ;

    int flag = 0 ;

    for ( int i = 0 ; i < s.size() ; i++ ) {

        

        if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' and cons == 1) {

            vow = 0;
            cons = 0;
        }
        else if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {

            vow++;
        }
        else{

            if( s[i] == 'n' and cons != 0) {

                flag = 1;
                break;
            }
            else if ( s[i] == 'n' and cons == 0 ) {

                continue;
            }
            else {

                if( cons != 0 ) {

                    flag = 1;
                    break;
                }
                else {
                    cons++;
                }
            }
        }
    }

    if ( flag != 0 || cons != 0  ) cout << "NO\n";
    else cout << "YES\n";

    return 0;
}
