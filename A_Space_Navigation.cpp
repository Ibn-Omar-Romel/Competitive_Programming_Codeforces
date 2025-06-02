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
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]
#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int x, y;
        cin >> x >> y;

        string s;
        cin >> s;

        int l = 0 , r = 0 , u = 0 , d = 0 ;

        for ( int i = 0 ; i < s.size() ; i++ ) {

            if ( s[i] == 'U' ) u++;
            else if ( s[i] == 'D' ) d++;
            else if ( s[i] == 'R' ) r++;
            else if ( s[i] == 'L' ) l++;
        }

        if ( x == 0 and y == 0 ) cout << "YES\n";

        else if ( ( x <= 0 and l >= abs( x ) ) and ( y >= 0 and u >= y )) yes
        else if ( ( x <= 0 and l >= abs( x ) ) and ( y <= 0 and d >= abs( y ) )) yes
        else if ( ( x >= 0 and r >=  x  ) and ( y >= 0 and u >= y )) yes
        else if ( ( x >= 0 and r >=  x  ) and ( y <= 0 and d >= abs( y ) )) yes

        else no
        
    }
    return 0;
}
