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

        int n ,k;
        cin >> n >> k ;

        st s = "";
        char ch = 'a';

        int count = 0;

        while( true ) {

            count++;
            if(count <= k) {

                s = s + ch;
                ch++;
            }
            else{
                ch = 'a';
                count = 0;
            }

            if( s.size() == n ) break;
        }

        cout << s << '\n';
        
    }
    return 0;
}
