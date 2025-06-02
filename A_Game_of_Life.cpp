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

        int size, k, count = 0;
        cin >> size >> k;

        string st;
        cin >> st;

        string s = st;
        string prev = st ;

        while( count <= size ) {

            count ++;

            for ( int i = 0 ; i < size ; i++ ){

                if( i == 0 ){

                    if(st[i] == '0' and st[i+1] == '1'){
                        s[0] = '1';
                    }
                }
                else if ( i == size - 1 and st[i] == '0' and st[i-1] == '1'){

                    s[i] = '1';
                }
                else if( st[i] == '0' and (st[i-1] == '1' ^ st[i+1] == '1')) {

                    s[i] = '1';
                }
            }

            if( prev == s){
                break;
            }
            st = s;

            if ( count >= k ) break;

        }
        cout << s << '\n';
    }
    
    return 0;
}

