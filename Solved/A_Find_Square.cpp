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

    int n, m ;
    cin >> n >> m;

    int check = 0, count = 0 ;
    int ini = 0 , end = 0;

    char ch;
    int x = 0, y = 0 ;

    for ( int i = 0 ; i < n ; i++ ) {

        for ( int j = 0 ; j < m ; j++ ) {

            cin >> ch;

            if( ch == 'B') count++;

            if( check == 0 and ch == 'B' ) {

                ini = j;
                check = 1;
                x = i;
                y = j;
            }
            if( check == 1 and ch == 'W' ) {

                end = j;
                check = 2;
            }

        }
        if( check == 1 ){
            end = m;
            check = 2;
        }
    }

    if( (n*m) == count ) {

        int value = ceil( (double)n / (double)2 );
        cout << value << " " << value << '\n';
        return 0;
    }

    int value = end - ini + 1;
    value /= 2;

    cout << x+value << " " << y+value << '\n';




    return 0;
}
