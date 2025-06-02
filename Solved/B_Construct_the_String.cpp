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

        int length, sub, dis;
        cin >> length >> sub >> dis;

        string s;
        char ch = 'a';

        int count = 1;

        for ( int i = 0 ; i < length ; i++ ) {

            cout << ch;
            ch++;

            if ( count == dis ) {

                count = 0;
                ch = 'a';
            }
            
            if ( ch > 'z' ) {

                ch = 'a';
            }
            count++;
        }
        cout << '\n';
    }
    return 0;
}
