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
        //size++;

        string s;
        cin >> s;
        //s = "."+ s;

        int count = 1;
        int max = INT_MIN;
        
        for ( int i = 1 ; i < size ; i++ ) {

            if ( s[i] == s[i-1] ) count++;

            else  {

                if ( max < count ) {

                    max = count;
                }
                count = 1;
            }
        }

        if ( count > max ) max = count;
        cout << max + 1 << "\n";
    }

    return 0;
}
