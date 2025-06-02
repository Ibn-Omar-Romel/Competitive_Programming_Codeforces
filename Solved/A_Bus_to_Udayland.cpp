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

    int size;
    cin >> size;

    char s[size][5];

    int count = 0;

    for ( int i = 0 ; i < size ; i++ ) {

        cin >> s[i][0] >> s[i][1] >> s[i][2] >> s[i][3] >> s[i][4] ; 

        if( s[i][0] == 'O' and s[i][1] == 'O' and count == 0 ){

            s[i][0] = '+';
            s[i][1] = '+';

            count = 1;
        }
        else if( s[i][3] == 'O' and s[i][4] == 'O' and count == 0 ){

            s[i][3] = '+';
            s[i][4] = '+';

            count = 1;
        }
    }

    if( count == 1 ) {

        cout << "YES\n";
        for ( int i = 0 ; i < size ; i++ ) {

            cout << s[i][0] << s[i][1] << s[i][2] << s[i][3] << s[i][4] << '\n'; 
        }
    }

    else {

        cout << "NO\n";
    }
    
    return 0;
}
