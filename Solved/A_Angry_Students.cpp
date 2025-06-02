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

        int max = 0, count = 0, check = 0;;
        for ( int i = 0 ; i < size ; i++ ) {


            if( s[i] == 'A' and check == 0) {

                check = 1;
                count = 0;
            }
            else if( s[i] == 'A' and check == 1) {

                if (count > max) {
                    max = count;
                }
                count = 0;

            }
            else{
                count++;
            }
        }


        if( count > max  and check == 1 ) max = count;

        cout << max << '\n';
    }
    return 0;
}
