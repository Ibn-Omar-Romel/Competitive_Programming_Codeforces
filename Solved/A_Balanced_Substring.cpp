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

    int t;
    cin >> t;

    while( t-- ) {

        int size;
        cin >> size;

        st s;
        cin >> s;

        if(size == 1 ) {

            cout << "-1 -1\n";
        }
        else{
            
            int flag = 0;

            for ( int i = 1 ; i < size ; i++ ) {

                if( (s[i] == 'a' and s[i-1] == 'b') || (s[i] == 'b' and s[i-1] == 'a')){

                    cout << i << " " << i+1 << '\n';
                    flag = 1;
                    break;
                }
            }

            if( flag == 0 ) {

                cout << "-1 -1\n";
            }
        }
    }
    return 0;
}
