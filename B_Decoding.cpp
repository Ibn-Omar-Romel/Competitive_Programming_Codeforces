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

    string s;
    cin >> s;

    int temp = size;

    string ans = "";

    if ( size % 2 != 0 ) {

        for ( int i = 0 ; i < size ; i++ ) {

            if ( temp % 2 == 0 ) {

                ans = s[i] + ans;
                temp--;
            }
            else {
                ans = ans + s[i];
                temp--;
            }
        }
    }
    else {

        for ( int i = 0 ; i < size ; i++ ) {

            if ( temp % 2 == 0 ) {

                ans = s[i] + ans;
                temp--;
            }
            else {
                ans = ans + s[i];
                temp--;
            }
        }
    }

    cout << ans <<'\n';
    return 0;
}
